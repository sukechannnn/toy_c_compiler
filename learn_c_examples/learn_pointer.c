#include <stdio.h>

int main() {
  char *s_ary[] = {"aaa", "bbb", "ccc", NULL};
  char **s_pointer = s_ary;

  while (*s_pointer != NULL) {
    printf("%s\n", *s_pointer);
    ++s_pointer;
  }

  return 0;
}
