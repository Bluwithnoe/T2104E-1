#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n,i;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++)
	{
			int j=i-1;
			int tmp = arr[i]; 
			printf("\nNhap phan tu thu %d: ",i);
			scanf("%d",&tmp);
			while (j>=0 && tmp < arr[j])
		    { 
				arr[j+1] = arr[j];
				j--;
			}	
			arr[j+1] = tmp;
			for (int x=0; x<=i; x++)
			{
				printf("%d ",arr[x]);
			}
			
	}
	printf("\n\nCac phan tu cua mang la: \n");
	for (i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
