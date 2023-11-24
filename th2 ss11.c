#include <stdio.h>
int main() {
  //1. Nhap so phan tu va gia tri cac phan tu
  int n;
  int i;
  int j; 
  printf("Nhap so phan tu cua mang:");
  scanf("%d", &n);
  int numbers [n];
  printf("Nhap gia tri cac phan tu mang:\n"); 
  for( i=0;i<n;i++) {
    printf("numbers[%d]=",i);
    scanf("%d", &numbers[i]);
  }
  //2. Su dung thuat toan Lua chon sap xep mang giam dan 
  for ( i=0;i<n-1;i++){
    for( j=i+1;j<n;j++){
      if (numbers[i]<numbers[j]){
        int temp = numbers[i]; 
        numbers[i] = numbers[j]; 
        numbers[j] = temp;
      }
    }
  }
  //3. In mang sau khi da sap xep
  printf("Mang sau khi da sap xep tang dan:\n"); 
  for ( i=0;i<n;i++) {
    printf("%d\t",numbers[i]);
  }
}
