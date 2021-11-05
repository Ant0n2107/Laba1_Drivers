obj-m := h.o
KDIR := /home/anton/linux-5.10.76
all:
	$(MAKE) -C $(KDIR) M=$$PWD
