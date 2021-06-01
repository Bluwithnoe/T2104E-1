#include <stdio.h>

int search (int arr[], int x, int n)
{
	int count=0;
	for (int i=0; i<n; i++) {
		if (arr[i]==x)
		{
			count++;
			return i;
		}
	}
	
	for (int i=0; i<n; i++) {
		if (count==0)
		{ 
			printf("\nKhong tim thay so trong mang.");
			return 0;
		}
	}
}

int main() {
	int x,n;
	
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	printf("\nNhap so can tim: ");
	scanf("%d",&x);
	
	int arr[n];
	for(int i=0;i<n;i++)
	{ 
		printf("\nNhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	if (search(arr,x,n))
	{ 
		printf("\nTim thay so %d tai vi tri %d.\n",x, search(arr,x,n));
	}
}
