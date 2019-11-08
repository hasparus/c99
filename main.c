#include "stdio.h"
#include "string.h"

int main() {
  puts("What's your name?");

  char s[100];
  scanf("%s", s);

  printf("Hello %s\n", s);

  return 0;
}
