#include <stdio.h>

int main(){
	
	int n,i,x,min,tiemcan;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	printf("Nhap so x: ");
	scanf("%d",&x);
	
	int arr[n];
	for(i=0;i<n;i++)
	{ 
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	min= x - arr[0];
	for (i=1;i<n;i++)
	{
		int cach = x - arr[i];
		if (min<0) 
		{
			continue;
		}
		else if (cach<min && cach>0)
		{
			min=cach;
			tiemcan=arr[i];
		}
	}
	printf("Phan tu gan x nhat la %d va be hon x %d.",tiemcan,min); 	
}
