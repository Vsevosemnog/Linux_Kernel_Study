CURRENT=$(shell uname -r)
KDIR=/lib/modules/$(CURRENT)/build
PWD=$(shell pwd)
DES=/lib/modules/$(CURRENT)/misc
TARGET=intptr_kernel
obj-m:=$(TARGET).o

default:
	clang intptr_user.c -o intptr_user
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	@rm -f intptr_user
	@rm -f *.o *.ko .*.cmd .*.flags *.mod.c *.order
	@rm -f .*.*.cmd *.symvers *~ *.*~ TODO.*
	@rm -fR .tmp*
	@rm -rf .tmp_versions