#include <stdio.h>

int main(){
	
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	
	if (n==0)
	{
		printf("Khong co so tiem can duoi n.");
	}
	else 
	{
		int x1=1, x2=1, x3=2;
		while ((x3+x2)<n)
		{
			x1 = x2;
			x2 = x3;
			x3 = x1+x2;
		}	
	printf("So tiem can duoi %d trong day Fibonaci la: %d\n",n,x3);
	}
}
