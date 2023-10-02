#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

float a, b, c;

// Masukkan koefisien x^2, x, dan konstanta
printf("Masukkan koefisien x^2: ");
scanf("%f", &a);
printf("Masukkan koefisien x: ");
scanf("%f", &b);
printf("Masukkan konstanta: ");
scanf("%f", &c);

// Hitung diskriminan
int d = b * b - 4 * a * c;

// Ubah tipe data dari diskriminan menjadi float
float f_d = (float)d;

// Tampilkan diskriminan
printf("Diskriminan: %.2f\n", f_d);

// Tentukan jenis akar
if (f_d > 0) {
    printf("Akar real dan berbeda\n");
} else if (f_d == 0) {
    printf("Akar real dan sama\n");
} else {
    printf("Tidak akar real\n");
}

return 0;
}