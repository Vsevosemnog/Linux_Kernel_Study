#include <linux/module.h>
#include "mf.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vsevosemnog");

static int __init init_driver(void)
{
    printk(KERN_INFO "start module, export calls: %s + %s + %s\n",
    mod_func_A(), mod_func_B(), mod_func_C());
    return 0;
}

static void __exit cleanup_driver(void) {}

module_init(init_driver);
module_exit(cleanup_driver);