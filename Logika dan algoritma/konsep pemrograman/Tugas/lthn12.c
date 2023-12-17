#include <stdio.h>

void bubble_sort(int data[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (data[j] < data[j + 1]) {
        int temp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = temp;
      }
    }
  }
}

int main() {
  int data[] = {10, 5, 2, 7, 8, 9, 6, 3, 4};
  int n = sizeof(data) / sizeof(data[0]);

  printf("Data awal: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");

  bubble_sort(data, n);

  printf("Data setelah diurutkan: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");

  return 0;
}
