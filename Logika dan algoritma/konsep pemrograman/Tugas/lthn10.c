#include <stdio.h>

int main() {
  // Deklarasi array
  char sandi[10];

  // Inisialisasi array
  for (int i = 0; i < 10; i++) {
    sandi[i] = 'a' + i;
  }

  // Mencetak array
  for (int i = 0; i < 10; i++) {
    printf("%c ", sandi[i]);
  }

  return 0;
}
