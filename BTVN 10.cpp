#include <stdio.h>
#include <stdlib.h>

int timmax (int *arr, int n)
{
	int max = 1;
    for(int i=0; i<n; i++)
    {
        if(*(arr+i) > max)
            max = *(arr+i);
    }
    
    printf("\nSo lon nhat la: %d", max);
}

void sapxepmang (int *arr, int n)
{
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){ 
			if(*(arr+j)>*(arr+(j+1))){ 
				int temp = *(arr+j);
				*(arr+j) = *(arr+(j+1)); 
				*(arr+(j+1)) = temp;
			}
		}
	}
	printf("\n\nMang sau khi sap xep la: ");
	for(int i=0;i<n;i++){
		printf("\n%d",*(arr+i));
	}
}

int main()
{
    int n,i,*arr;
	printf("Nhap kich thuoc mang: ");
	scanf("%d",&n);
	arr = (int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
	{ 
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",arr+i);
	}
	
	timmax(arr,n);
	
	sapxepmang(arr,n);
	
	int m;
	arr = (int *)realloc(arr,m*sizeof(int)); 
	printf("\n\nNhap them m phan tu: ");
	scanf("%d",&m);
	
	for(int i=n;i<m+n;i++)
	{
		printf("Nhap pt thu %d: ",i);
		scanf("%d",arr+i);
	}
		
	timmax(arr,m+n);
	
	sapxepmang(arr,m+n);
	
	free(arr);
}
