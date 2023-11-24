#include<stdio.h>
int main(){
	int choice;
	int size;
	int find;
	int count=0;
	int mid;
	int start = 0;
	printf("nhap kich thuoc cua mang: ");
	scanf("%d", &size);
	int end = size;
	int numbers[size];
	for (int i=0; i<size; i++){
		printf("\nphan tu thu [%d]: ",i);
		scanf("%d",&numbers[i]);
		}
	do{
		printf("\n                     Menu");
	printf("\n1. in gia tri cac phan tu trong mang");
	printf("\n2. Nhap gia tri tim kiem va su dung thuat toan tim kiem tuyen tinh tim tat ca cac phan tu trong mang co gia tri bang gia tri tim kiem");
	printf("\n3. Nhap gia tri tim kiem va su dung thuat toan tim kiem nhi phan tim phan tu trong mang");
	printf("\n4. Thoat");
	printf("\nnhap lua chon can nhap: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			for (int i=0; i<size; i++){
				printf("Phan tu thu [%d] = %d\n",i,numbers[i]);
			}
			break;
		case 2:
			printf("nhap phan tu muon tim kiem: ");
			scanf("%d", &find);
			for(int i=0; i<size; i++){
				if(find== numbers[i]){
					count++;
				}
			}
			printf("Co %d ki tu giong ki tu tim kiem",count);
			break;
		case 3:
			printf("nhap phan tu muon tim kiem: ");
			scanf("%d", &find);
			while(start<=end) {
	    		mid = (start+end)/2;	
	    		printf("%d", mid);
	    		if (numbers[mid] == find){
	     			break;
				} else if (numbers [mid]<find){
		 			start = mid+1;
				} else {
					end = mid-1;
				}
			}
  			if (numbers [mid] == find){
	 			printf("Phan tu co chi so %d trong mang co gia tri %d\n",mid,numbers[mid]);
					}
					else{
    					printf("Khong tim thay phan tu co gia tri %d trong mang\n",find);
 					}
 			break;
		case 4:
			printf("thoat");
			break;
		}
	}while(choice != 4);
}
