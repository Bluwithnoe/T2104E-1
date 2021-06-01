#include <stdio.h>
#include <math.h>

int timucln(int a, int b)
{
	int ucln;
	for (int i = 1; i <= a && i <=b; i++)
    {
    	if (a%i == 0 && b%i == 0)
    	{
			ucln=i;
		}
	}
	return ucln;
}

int main(){
	int c,d;
	
    printf("Nhap so thu nhat: ");
    scanf("%d",&c);
    printf("\nNhap so thu hai: ");
    scanf("%d",&d);
    
    printf("\nUCLN cua hai so can tim la: %d",timucln(c,d));
    
}
