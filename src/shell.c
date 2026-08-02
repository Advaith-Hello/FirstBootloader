#include <uefi.h>


int read_line(char *buffer)
{
  int i = 0;
  int buffer_len = sizeof(buffer);

  while (i < buffer_len)
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

  if (i == buffer_len) return 2;
  return 0;
}


int shell_line(char *buffer)
{
  printf("$ ");
  int status = read_line(buffer);
  printf("\n");
  return status;
}

