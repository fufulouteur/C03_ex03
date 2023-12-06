#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int n) {
  char *dest_forward;

  dest_forward = dest;
  while (*dest_forward != '\0') {
    dest_forward++;
    if (*dest_forward == '\0') {
      while (n != '0') {
        *dest_forward = *src;
        dest_forward++;
        src++;
        n--;
      }
    }
  }
  if (n != '0') {
    while (*dest_forward != '\0') {
      *dest_forward = ' ';
      dest_forward++;
    }
  }
  return dest;
}
