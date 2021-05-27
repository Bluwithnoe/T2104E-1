#include <stdio.h>

int main(){
    int arr[100];
    int n,i;
    int slc=0;
    printf("Nhap so luong phan tu: ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > 100){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > 100);
    
    for(i = 0;i < n; ++i){
        printf("\nNhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    for(i=n-1; i>=0; i--)
    {
        if(arr[i]%2!=0)
        {
			slc=arr[i];
			printf("\nSo le cuoi cung cua mang la %d.",slc);	
			break;
		}
    }
}

