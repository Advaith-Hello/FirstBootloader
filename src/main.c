#include <uefi.h>

int main (int argc, char **argv) {
  printf("Hello World!\n");
  while (1) {
    __asm__ __volatile__("hlt");
  }
  return 0;
}

