#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int r,a,b,c;
	float p,s;

    printf("Nhap 3 so de tao thanh mot tam giac.");

    do
	{ 	
        printf("\nNhap so thu nhat:");
        scanf("%d",&a);

        printf("\nNhap so thu hai: ");
        scanf("%d",&b);
        
        printf("\nNhap so thu ba: ");
        scanf("%d",&c); 
        if((a+b-c <= 0) || (a+c-b <= 0) || (b+c-a <= 0))
          {
        	printf("\nDay khong phai 3 canh cua tam giac. Xin nhap lai!");
          }
        else 	{
			printf("3 so vua nhap tao thanh ba canh cua mot tam giac.");
		    r = a+b+c;
            printf("\nChu vi cua tam giac la: %d.",r);
            p = (a+b+c)/2;
            s = sqrt(p*(p-a)*(p-b)*(p-c));
            printf("\nDien tich cua tam giac la: %f.",s);
        }
	} while((a+b-c <= 0) || (a+c-b <= 0) || (b+c-a <= 0));

}
