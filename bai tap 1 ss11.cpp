#include<stdio.h>
int main(){
	int choice;
	int size;
	int numbers[size];
	printf("\nnhap kich thuoc cua mang: ");
	scanf("%d", &size);
	for (int i=0; i<size; i++){
		printf("\nphan tu thu [%d]: ",i);
		scanf("%d",&numbers[i]);
		}
	do{
		printf("\n                         Menu");
	printf("\n1. in gia tri cac phan tu trong mang");
	printf("\n2. su dung insertion sort sap xep mang giam dan va in ra");
	printf("\n3. su dung insertion sort sap xep mang tang dan va in ra");
	printf("\n4. su dung bubble sort sap xep mang giam dan va in ra");
	printf("\n5. Thoat");
	printf("\nnhap lua chon can nhap: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			for (int i=0; i<size; i++){
				printf("Phan tu thu [%d] = %d\n",i,numbers[i]);
			}
			break;
		case 2:
			for (int i=0;i<size;i++){
				for(int j=i+1;j<size;j++){
					if(numbers[i] < numbers[j]){
						int temp = numbers[i];
						numbers[i] = numbers[j];
						numbers[j] = temp;
					}
				}
			}
			for (int i=0; i<size; i++){
				printf("phan tu thu [%d] = %d\n",i,numbers[i]);
			}
			break;
		case 3:
			for (int i=0;i<size;i++){
				for(int j=i+1;j<size;j++){
					if(numbers[i] > numbers[j]){
						int temp = numbers[j];
						numbers[j] = numbers[i];
						numbers[i] = temp;
					}
				}
			}
			for (int i=0; i<size; i++){
				printf("phan tu thu [%d] = %d\n",i,numbers[i]);
			}
			break;
		case 4:
			for (int i=0;i<=size-1;i++){
    			for(int j= i+1; j <= size; j++){
      				if (numbers[i]<numbers[j]){
        				int temp = numbers[j];
        				numbers[j] = numbers[i]; 
        				numbers[i] = temp;
      				}
    			}
			printf("phan tu thu[%d] = %d\n",i,numbers[i]);
  			}
  			printf("Mang sau khi da sap xep giam dan\n");
  			break;
		case 5:
			printf("thoat");
			break;
		}
	}while(choice != 5);
}
