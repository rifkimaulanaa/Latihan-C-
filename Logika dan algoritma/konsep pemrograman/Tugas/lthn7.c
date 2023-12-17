#include <stdio.h>

int main() {
  char words[] = "Hello, world!";

  printf("%s\n", words);

  int len = strlen(words);
  for (int i = 0; i < len; i++) {
    printf("%c", words[i]);
  }

  return 0;
}
