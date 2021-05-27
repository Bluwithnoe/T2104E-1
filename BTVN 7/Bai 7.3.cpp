#include <stdio.h>

int main(){
	
    int arr[100];
    int n,i,j,count;
    int max=0; 
    
    printf("Nhap so luong phan tu: ");
    
    do{
        scanf("%d", &n);
        if(n <= 0 || n > 100){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > 100);
    
    for(i = 0;i < n; i++){
        printf("\nNhap phan tu thu %d: ",i);
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<n; i++) 
	{

    	if (arr[i]>0) 
    	{
    		count=0;
			j=i;
    		while (j<=n && arr[j]>0)
    		{
    			count++;
    			j++;
			}
		}
		if (count>max)
		{
			max=count;
		}

		else
		{
			continue;
			count=0;
			count++;
			i++;
		}

	}
	
	printf("\nSo luong cac so duong lien tiep nhieu nhat cua mang la %d.",max);
}
