#include <uefi.h>
#include <string.h>



static inline void hang() {
  while (1) {
    __asm__ __volatile__("hlt");
  }
}


int main (int argc, char **argv) 
{
  int i = 0;
  char buffer[256];
  printf("What is your name: ");
  
  while (1)
  {
    int key = getchar_ifany();

    if (key) {
      const char c = (char)key;
      if (c == '\r') {break;}
      printf("%c", c);
      buffer[i] = c;
      i += 1;
    }
  }

  printf("\n");
  printf("Hello, %s", buffer);

  hang();
  return 0;
}

