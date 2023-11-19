#include <linux/module.h>

char *mod_func_A(void)
{
    static char *ststr = __FUNCTION__ ;
    return ststr;
};

EXPORT_SYMBOL(mod_func_A);