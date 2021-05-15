#include <stdio.h>
#include <math.h>

int main(){
	
	int a, b,c;
	
	printf("Nhap a=");
	scanf("%d",&a);
	
	printf("Nhap b=");
	scanf("%d",&b);
	
	printf("Nhap c=");
	scanf("%d",&c);
	
	int delta;
	float x1,x2;
	
	delta = b*b - 4*a*c;
	if (delta<0) {
		printf("Phuong trinh khong co nghiem.");
	}
	if (delta==0) {
		x1 = -b/(2*a);
		printf("Phuong trinh co mot nghiem:%d",x1);
	}
	if (delta>0) {
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		printf("Phuong trinh co hai nghiem:%f,%f",x1,x2);
	}
}
	
