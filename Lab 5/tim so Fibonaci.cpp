#include <stdio.h>

int main(){
	
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	if (n==0)
	{
		printf("Khong the tim thay.");
	}
	else if(n==1)
	{
		printf("So thuoc day Fibonaci thu 1 la: 1");
	}
	else if(n==2) 
	{
		printf("So thuoc day Fibonaci thu 2 la: 1");
	}
	else if(n==3) 
	{
		printf("So thuoc day Fibonaci thu 3 la: 2");
	}
	else 
	{
		int x1=1, x2=1, x3=2;
		for(int i=4;i<=n;i++)
		{
			x1 = x2;
			x2 = x3;
			x3 = x1+x2;
		}	
	printf("So thuoc day Fibonaci thu %d la: %d\n",n,x3);
	}
}
