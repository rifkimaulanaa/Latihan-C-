#include <stdio.h>

int main() {
  char words[100];

  printf("Masukkan string: ");
  scanf("%[^\n]s", words);

  printf("String yang dimasukkan: %s\n", words);

  return 0;
}
