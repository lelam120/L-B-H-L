#include <stdio.h>

int main() {
  int n;
  printf("Nhap so phan mang la: ");
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  
  int tong = 0;
  int dem = n;
  for (int i = 0; i < n; i++) {
      tong += arr[i];
  }

  float tb = (float)tong / dem;

  printf("Trung binh cac so trong mang la: %f", tb);

}
