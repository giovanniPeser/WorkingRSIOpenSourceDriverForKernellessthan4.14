# WorkingRSIOpenSourceUSBDriverForKernellessthan4.14

It was seen that the rsi open-source usb-driver for kernel 4.9 does not work.
Specifically the driver is compiled but when the rs911x device is iconnected, it is recognized, but the driver is not loaded and it does not work(also forcing the loading of the driver).
For this reason the open-source driver included in kernel 5.9 was taken and the necessary modification were done.
To make this driver working it is necessary to download the folder and to substitute the rsi folder in kernel 4.9 (which is located in drivers/net/wireless/).
Moreover it is necessary to copy the file 'rsi_91x.h' in include/net/.
After that it is possible to cross-compile the kernel and so also the driver(after having done the make menuconfig with the driver enabling).


# Modifications done:

to port the driver to the version it was necessary to the some backport mdifications, in particular:

--> timer_setup(x,y,z) was subsituted with > init_timer(x)
                                           > x.data = (unsigned long) x
                                           > x.function ) = y
                                           > add_timer(x)
    Moreover the y function was modified:
    y(something t)  
    {               
       obj  a= ...  
       etc          
    }          
                                          > y(long unsigned int t)
                                          > {
                                          >     obj a = (obj *)t
                                          >     etc
                                          > }
    
--> skb_put_dev(etc)                      > buffer = skb_put(skb, msg_len);
                                          > memcpy(buffer,
	                                        >        (u8 *)(msg +  FRAME_DESC_SZ + pad_bytes),
	                                        >        msg_len);
                                          >	pkt_recv = buffer[0];
    
--> wiphy_ext_feature_set(wiphy,NL80211_EXT_FEATURE_CQM_RSSI_LIST) was commented > //wiphy_ext_feature_set(wiphy,NL80211_EXT_FEATURE_CQM_RSSI_LIST)

Modifications done in files:
  usb_common.h
  rsi_91x_mgmt.c
  rsi_91x_mac80211.c
  rsi_91x_hal.c
  rsi_91x_main.c

# Doubts:

when the device is connected some error message are shown:

- about power_save not possible to disable since already disabled
- about read of frame, if the bluetooth is not required it is possible to forced the driver to be loaded in station mode with:
      sudo modprobe rsi_usb dev_oper_mode=1
- about reset when the usb device is disconnected







