#include <stdio.h>
#include <math.h>

int main() {
          float a,b,c,p,s;
          printf("Nhap do dai canh thu nhat: ");
          scanf("%f",&a);

          printf("Nhap do dai canh thu hai: ");
          scanf("%f",&b);

          printf("Nhap do dai canh thu ba: ");
          scanf("%f",&c);

          if((a+b>c) && (a+c>b) && (b+c>a)) {
          	
            printf("Day la ba canh cua tam giac.");
            p = (a+b+c)/2;
            printf("Chu vi cua tam giac la: %f.",p);
            s = sqrt(p*(p-a)*(p-b)*(p-c));
            printf("Dien tich cua tam giac la: %f.",s);

          } else
            printf("Day khong phai la ba canh cua tam giac.");

}
