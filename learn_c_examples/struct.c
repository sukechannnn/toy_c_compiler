#include <stdio.h>

struct hoge {
  int i;
  char c;
};

int main() {
  struct hoge h = {1, 'c'};

  printf("%d\n", h.i);
  printf("%c\n", h.c);
  return 0;
}
