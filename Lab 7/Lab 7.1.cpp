#include <stdio.h>

int main () {
	int n,tbc;
	printf("Nhap kich thuoc mang: ");
	scanf("%d",&n);
	int arr[n];
	
	for (int i=0;i<n;i++) 
	{
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	int tong=0, dem=0;
	for (int i=0;i<n;i++)
	{
		if (arr[i]%2 != 0)
		{
			tong = tong + arr[i];
			dem++;
		}
	}
	
	if (dem==0)
	{
		printf("Mang khong co so le.");
	}
	else 
	{
		tbc=tong/dem;
		printf("Trung binh cong cac so le trong mang la: %d",tbc);
	}
} 
