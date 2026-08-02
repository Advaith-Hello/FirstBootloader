#include <uefi.h>

#include "shell/shell.h"


int main (int argc, char **argv) 
{
  while (1) {
    char buffer[256] = {0};
    shell_line(buffer, sizeof(buffer));
    printf("%s\n", buffer);
  }
  return 0;
}

