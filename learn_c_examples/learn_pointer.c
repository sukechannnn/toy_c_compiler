#include <stdio.h>

int main() {
  char c = 'a';
  char *point = &c;

  *point = 'b';
  printf("%c\n", c);

  return 0;
}
