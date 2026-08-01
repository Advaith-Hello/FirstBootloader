SRCS = $(wildcard src/*.c)
TARGET = bin/BOOTX64.EFI

include uefi/Makefile

