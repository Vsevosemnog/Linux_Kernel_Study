CURRENT=$(shell uname -r)
KDIR=/lib/modules/$(CURRENT)/build
PWD=$(shell pwd)
DES=/lib/modules/$(CURRENT)/misc

EXTRA_CFLAGS += -O3 -std=gnu89 --no-warnings
OBJS = mod.o mf1.o mf2.o mf3.o
TARGET1 = mobj
TARGET2 = mcall

obj-m := $(TARGET1).o $(TARGET2).o
$(TARGET1)-objs := $(OBJS)

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

$(TARGET1).o: $(OBJS)
	$(LD) -r -o $@ $(OBJS)

clean:
	@rm -f *.o *.ko .*.cmd .*.flags *.mod.c *.order *.mod 
	@rm .*.o.d
	@rm -f .*.*.cmd *.symvers *~ *.*~ TODO.*
	@rm -fR .tmp*
	@rm -rf .tmp_versions