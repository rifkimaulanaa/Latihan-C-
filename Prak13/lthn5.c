#include <stdio.h>

float konversi(float suhu, char asal, char tuj) {
  float Hasil;

  if (asal == 'R' || asal == 'r') {
    if (tuj == 'R' || tuj == 'r') {
      Hasil = suhu;
    } else if (tuj == 'F' || tuj == 'f') {
      Hasil = suhu * 9 / 5 + 32;
    } else if (tuj == 'K' || tuj == 'k') {
      Hasil = suhu + 273;
    }
  } else if (asal == 'F' || asal == 'f') {
    if (tuj == 'R' || tuj == 'r') {
      Hasil = (suhu - 32) * 5 / 9;
    } else if (tuj == 'F' || tuj == 'f') {
      Hasil = suhu;
    } else if (tuj == 'K' || tuj == 'k') {
      Hasil = (suhu - 32) * 5 / 9 + 273;
    }
  } else if (asal == 'C' || asal == 'c') {
    if (tuj == 'R' || tuj == 'r') {
      Hasil = suhu / 5 - 273;
    } else if (tuj == 'F' || tuj == 'f') {
      Hasil = suhu * 9 / 5;
    } else if (tuj == 'K' || tuj == 'k') {
      Hasil = suhu + 273;
    }
  }

  return Hasil;
}

int main() {
  float S;
  char A, T;

  printf("Masukkan suhu sumber: ");
  scanf("%f", &S);

  printf("Masukkan satuan asal: ");
  getchar();
  A = getchar();

  printf("Masukkan satuan tujuan: ");
  getchar();
  T = getchar();

  printf("Hasil konversi suhu %f %c = %f %c\n", S, A, konversi(S, A, T), T);

  return 0;
}
