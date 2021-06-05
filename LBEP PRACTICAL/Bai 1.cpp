#include <stdio.h>
#include <math.h>

int main() {
        int a,b,c;
		float p,s;
        printf("Nhap do dai canh thu nhat: ");
        scanf("%d",&a);

        printf("Nhap do dai canh thu hai: ");
        scanf("%d",&b);

        printf("Nhap do dai canh thu ba: ");
        scanf("%d",&c);

        if((a+b>c) && (a+c>b) && (b+c>a)) 
		{
          	printf("Day la ba canh cua tam giac.");
            p = (a+b+c)/2;
            s = sqrt(p*(p-a)*(p-b)*(p-c));
            printf("\nDien tich cua tam giac la: %f",s);

        } else
            printf("3 so vua nhap khong phai do dai ba canh cua mot tam giac.");

}
