#include <stdio.h>
int main(){
    int row,col;
    printf("Nhap so dong va so cot cua mang 2 chieu:");
    scanf("%d%d", &row, &col);
    int numbers[row][col];
    for (int i = 0; i < row; i++){
        	for (int j = 0; j < col; j++){
           		printf("numbers[%d][%d]=",i,j);
            	scanf("%d",&numbers[i][j]);
        		}
   			}
    int choice;
    do{
		printf("\n                   Menu");
	printf("\n1. in gia tri mang theo ma tran");
	printf("\n2. sap xep mang co gia tri cac phan tu theo dong tang dan");
	printf("\n3. sap xep mang co gia tri cac phan tu theo cot giam dan");
	printf("\n4. thoat");
	printf("\nnhap lua chon can nhap: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			for(int i = 0; i < row ; i++){
    			for (int j=0; j < col; j++){
      				printf("%d\t" , numbers[i][j]);
    				}
    				printf("\n");
  				}
  			break;
  		case 2:
  			for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col - 1; j++) {
                        for (int k = j + 1; k < col; k++) {
                            if (numbers[i][j] > numbers[i][k]) {
                                int temp = numbers[i][j];
                                numbers[i][j] = numbers[i][k];
                                numbers[i][k] = temp;
                            }
                        }
                    }
                }
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        printf("%d\t", numbers[i][j]);
                    }
                    printf("\n");
                }
                break;
		case 3:
			for (int j = 0; j < col; j++) {
                    for (int i = 0; i < row - 1; i++) {
                        for (int k = i + 1; k < row; k++) {
                            if (numbers[i][j] < numbers[k][j]) {
                                int temp = numbers[i][j];
                                numbers[i][j] = numbers[k][j];
                                numbers[k][j] = temp;
                            }
                        }
                    }
                }
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        printf("%d\t", numbers[i][j]);
                    }
                    printf("\n");
                }
                break;
		}
	}while(choice != 4);
}
