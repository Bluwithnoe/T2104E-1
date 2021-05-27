#include <stdio.h>

int main(){
    int arr[100];
    int n,i;
    printf("Nhap so luong phan tu: ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > 100){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > 100);
    
    for(i = 0;i < n; ++i){
        printf("\nNhap phan tu thu %d: ",i);
        scanf("%d", &arr[i]);
    }
    
    int min = arr[0];
	for(i=0; i<n; i++)
    {
        if(arr[i]<min && arr[i] > 0)
        {
        	min = arr[i];		
		}
    }
    printf("\nSo duong nho nhat cua mang la %d.",min);	
}

