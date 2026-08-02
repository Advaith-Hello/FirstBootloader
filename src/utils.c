#include <uefi.h>


void hang() {
  while (1) {
    __asm__ __volatile__("hlt");
  }
}

