#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vsevosemnog");

static int __init config_runtime_init(void)
{
    printk("CONFIG_SMP is %s defined\n", IS_ENABLED(CONFIG_SMP) ? "" : "not");

    printk("CONFIG_64BIT is %s defined\n", IS_ENABLED(CONFIG_64BIT) ? "" : "not");

    return -1;
}

module_init(config_runtime_init);