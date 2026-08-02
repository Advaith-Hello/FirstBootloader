#include <uefi.h>


int read_line(char *buffer, size_t buffer_len)
{
  int i = 0;

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


int shell_line(char *buffer, size_t buffer_len)
{
  printf("$ ");
  int status = read_line(buffer, buffer_len);
  printf("\n");
  return status;
}

