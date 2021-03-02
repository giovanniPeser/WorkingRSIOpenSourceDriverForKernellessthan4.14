#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd29ace7d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5ebde917, __VMLINUX_SYMBOL_STR(rsi_91x_init) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7e9efe8e, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf097c726, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdf49127f, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x7201b98a, __VMLINUX_SYMBOL_STR(rsi_dbg) },
	{ 0xdab80732, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xce83ca5, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfd638a03, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xfc8f865a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xefe524f0, __VMLINUX_SYMBOL_STR(rsi_mac80211_detach) },
	{ 0x6a3c4864, __VMLINUX_SYMBOL_STR(rsi_read_pkt) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9adc66c, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x174371aa, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x18dcf36f, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x5fbea82, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x3bc7075b, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbb004d68, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe135f7aa, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf27552de, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xdcae292e, __VMLINUX_SYMBOL_STR(rsi_hal_device_init) },
	{ 0x3192d712, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x1e92f6ec, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x1ca0db5e, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x511ded, __VMLINUX_SYMBOL_STR(rsi_91x_deinit) },
	{ 0x2b6a2531, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xde10e87b, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rsi_91x";

MODULE_ALIAS("usb:v1618p9113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1618p9116d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9B6B5F6B8F5FFDB0E7592E4");
