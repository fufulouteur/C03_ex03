#include <stdio.h>
#include <string.h>
char *ft_strncat(char *dest, char *src, unsigned int n);

int main() {
  char tab[] = "coucou\0";
  char tab2[] = "coucou\0";
  printf("%s\n", ft_strncat(tab2, tab, 3));
  return 0;
}
