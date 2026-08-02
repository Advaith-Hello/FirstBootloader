SRCS = $(wildcard src/*.c)
TARGET = disk/EFI/BOOT/BOOTX64.EFI

include uefi/Makefile

