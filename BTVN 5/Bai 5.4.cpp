#include<stdio.h>
#include <math.h>

int main(){
	int a,b,i,j,ucln,bcnn;
	
    printf("Nhap a=");
    scanf("%d",&a);
    printf("Nhap b=");
    scanf("%d",&b);
    
    for (i = 1; i <= a && i <=b; i++)
    {
    	if (a%i == 0 && b%i == 0)
    	{
			ucln=i;
		}
	}
	
	for (j=1;j<=a*b;j++)
	{
		if (j%a==0 && j%b==0)
		{
			j=(a*b)/ucln;
			bcnn=j;
			break;
		}
	}
	printf("BCNN cua a va b la: %d",bcnn);
}
