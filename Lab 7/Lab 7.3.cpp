#include <stdio.h>

int main () {
	int n,x;
	printf("Nhap kich thuoc mang: ");
	scanf("%d",&n);
	int arr[n];
	
	for (int i=0;i<n;i++) 
	{
		printf("\nNhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nNhap so can tim trong mang: ");
	scanf("%d",&x);
	
	int dem=0;
	for (int i=0;i<n;i++)
	{
		if (arr[i]==x)
		{
			dem++;
			break;
		}
	}
	if (dem>0)
	{
		printf("\nMang co phan tu gia tri %d.",x);
	}
	else 
	{
		printf("\nKhong tim thay phan tu gia tri %d.",x);
	}
}

