CURRENT=$(shell uname -r)
KDIR=/lib/modules/$(CURRENT)/build
PWD=$(shell pwd)
DES=/lib/modules/$(CURRENT)/misc
TARGET=config
obj-m:=$(TARGET).o

default:
	$(MAKE) -C $(KDIR) M=$(PWD) modules
clean:
	@rm -f *.o *.ko .*.cmd .*.flags *.mod.c *.order *.mod
	@rm -f .*.*.cmd *.symvers *~ *.*~ TODO.*
	@rm -fR .tmp*
	@rm -rf .tmp_versions