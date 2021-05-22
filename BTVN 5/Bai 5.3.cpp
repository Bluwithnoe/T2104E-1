#include<stdio.h>
#include <math.h>

int main(){
	int a,b,i,ucln;
	
    printf("Nhap a=");
    scanf("%d",&a);
    printf("Nhap b=");
    scanf("%d",&b);
    
    
    for (i = 1; i <= a && i <=b; i = i+1)
    {
    	if (a%i == 0 && b%i == 0)
    	{
			ucln=i;
		}
	}
	printf("UCLN cua a va b la: %d",ucln);
	
	return 0;
}
