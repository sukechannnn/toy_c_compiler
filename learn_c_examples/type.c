#include <stdio.h>

typedef struct hoge {
  int i;
  char c;
} Hoge;

int main() {
  Hoge hoge;

  hoge.i = 1;
  hoge.c = 'c';

  printf("%d\n", hoge.i);
  printf("%c\n", hoge.c);
  return 0;
}
