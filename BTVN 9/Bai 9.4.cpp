#include <stdio.h>
#include <math.h>

int timbcnn(int a, int b)
{
	int bcnn;
	int max=a*b,min=0;
	if (a<b)
	{ 
		min=a;
	}
	else 
	{
		min=b;
	}
	for (int i = min; i <= max; i+=min)
    {
    	if (i%a==0 && i%b==0)
    	{
			bcnn=i;
			break;
		}
	}
	return bcnn;
}

int main(){
	int c,d;
	
    printf("\nNhap so thu nhat: ");
    scanf("%d",&c);
    printf("\nNhap so thu hai: ");
    scanf("%d",&d);
    
    printf("\nBCNN cua hai so can tim la: %d",timbcnn(c,d));
    
}
