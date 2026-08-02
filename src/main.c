#include <uefi.h>

#include "utils.h"
#include "shell.h"


int main (int argc, char **argv) 
{
  while (1) {
    char buffer[512] = {0};
    printf("$ ");
    read_line(buffer, sizeof(buffer));
    printf("\n");
    printf("%s\n", buffer);
  }

  return 0;
}

