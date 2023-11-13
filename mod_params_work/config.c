#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vsevosemnog");

static int __init config_init(void)
{
#if defined(CONFIG_SMP)
    printk("CONFIG_SMP = %d\n", CONFIG_SMP);
#else
    printk("CONFIG_SMP is not defined");
#endif

#if defined(CONFIG_64BIT)
    printk("CONFIG_64BIT = %d\n", CONFIG_64BIT);
#else
    printk("CONFIG_64BIT is not defined");
#endif

#if defined(CONFIG_OUTPUT_FORMAT)
    printk("CONFIG_OUTPUT_FORMAT = %s\n", CONFIG_OUTPUT_FORMAT);
#else
    printk("CONFIG_OUTPUT_FORMAT is not defined");
#endif
/*
#if defined(CONFIG_NET_ACT_BPF)
    printk("CONFIG_NET_ACT_BPF = %d\n", CONFIG_NET_ACT_BPF);
#elif defined(CONFIG_NET_ACT_BPF_MODULE)
    printk("CONFIG_NET_ACT_BPF_MODULE = %d\n", CONFIG_NET_ACT_BPF_MODULE);
#else
    printk("CONFIG_NET_ACT_BPF_* is not defined");
#endif
*/
   return -1;
}

module_init(config_init);