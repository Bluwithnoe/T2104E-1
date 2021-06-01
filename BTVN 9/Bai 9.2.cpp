#include <stdio.h>

int timsole(int arr[],int n)
{
	for (int i=0; i<n; i++)
	if (arr[i]%2 != 0)
	{
		printf("\nCac so le trong mang la: ");
		printf("%d",arr[i]);
	}
}

int main() {
	int n,i;
	
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	
	int arr[n],sole;
	for(i=0;i<n;i++)
	{ 
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
		
	for (i=0;i<n;i++)	
	{
		if (timsole(arr,n))
		{
			return 0;
		}
		else
		{
			printf("Mang khong co so le.");
		}
	}
	
}
