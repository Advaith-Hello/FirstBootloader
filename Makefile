SRCS = $(shell find src -type f -iname '*.c')

$(shell mkdir -p disk/EFI/BOOT/)
TARGET = disk/EFI/BOOT/BOOTX64.EFI

include uefi/Makefile

CFLAGS := -I./src $(CFLAGS)
CFLAGS += -nostdinc

