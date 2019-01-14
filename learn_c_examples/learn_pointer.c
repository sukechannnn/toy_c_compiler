#include <stdio.h>

int main() {
  char c[] = "aaa";
  char *point = c;

  point[1] = 'b';
  printf("%s\n", c);
  printf("%c\n", point[0]);

  return 0;
}
