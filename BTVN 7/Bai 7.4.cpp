#include <stdio.h>

int main() {
	
    int arr[100];
    int n,i,j;
    int tong=0, tong1=0, tong2=0; 
    int max=0;
    
    printf("Nhap so luong phan tu: ");
    
    do{
        scanf("%d", &n);
        if(n <= 0 || n > 100)
		{
            printf("\nNhap lai so luong phan tu: ");
        }
    } while(n <= 0 || n > 100);
    
    for(i = 0;i < n; i++){
        printf("\nNhap phan tu thu %d: ",i);
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<n; i++) 
    {
    	if (arr[i]>0)
    	{
    		tong1 = tong1 + arr[i];
		}
		else 
		{
			continue;
			tong2 = tong2 + arr[i];
			
		}
	}
	if (tong2>tong1)
	{
		max=tong2;
	} 
	else
	{
		max=tong1;
	}

    printf("Tong lon nhat cua cac so duong lien tiep la %d.",max);
}

