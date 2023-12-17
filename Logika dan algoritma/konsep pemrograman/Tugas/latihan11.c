#include <stdio.h>

int main() {
    // Deklarasi array karakter (string)
    char words[5];

    // Membaca 5 karakter dari keyboard dan menyimpannya dalam array
    printf("Masukkan 5 karakter: ");
    for (int i = 0; i < 5; i++) {
        printf("Masukkan karakter ke-%d: ", i+1);
        scanf(" %c", &words[i]);  // Membaca karakter dan menyimpannya di dalam array
    }

    // Menampilkan isi array karakter
    printf("Isi array karakter: ");
    for (int i = 0; i < 5; ++i) {
        printf("%c ", words[i]);  // Menampilkan karakter di dalam array
    }
    printf("\n");

    return 0;
}