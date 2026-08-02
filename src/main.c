#include <uefi.h>

#include "shell/shell.h"


int main (int argc, char **argv) 
{
  while (1) {
    char buffer[512] = {0};
    shell_line(buffer);
    printf("%s\n", buffer);
  }
  return 0;
}

