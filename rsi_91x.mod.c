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
	{ 0xe39f42e9, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7e9efe8e, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0xaf16907c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xf68fb2c4, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xdc8d1ea1, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x623becea, __VMLINUX_SYMBOL_STR(ieee80211_cqm_rssi_notify) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6c586178, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x508db8e3, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x3523ed9d, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xe8663ae6, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa4386846, __VMLINUX_SYMBOL_STR(ieee80211_scan_completed) },
	{ 0xcf4b6577, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xb686997c, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x3060491f, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x90b25d8e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xdf49127f, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x887b3378, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xb093d7d, __VMLINUX_SYMBOL_STR(ieee80211_ready_on_channel) },
	{ 0xdab80732, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xb67f2a2b, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xce83ca5, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9341bc63, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe0c797d, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0xfc8f865a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x174371aa, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcb492f13, __VMLINUX_SYMBOL_STR(ieee80211_remain_on_channel_expired) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2879c9ec, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x70e57cec, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x310917fe, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x3907d13c, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x86e76ee, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x18dcf36f, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x973d0f9e, __VMLINUX_SYMBOL_STR(kstrtoul_from_user) },
	{ 0x904f4507, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xa54a8f11, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xbb004d68, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xc4a61f, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x12d66e97, __VMLINUX_SYMBOL_STR(ieee80211_generic_frame_duration) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xc33c1d73, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x9dec1d15, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfdd390dc, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0x68e2b935, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xa16cbe31, __VMLINUX_SYMBOL_STR(ieee80211_probereq_get) },
	{ 0x989d269b, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf27552de, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x3192d712, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x1ca0db5e, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x617f2cb2, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xc8507792, __VMLINUX_SYMBOL_STR(ieee80211_queue_stopped) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "AC63FB96D2B1AA317C31D6C");
