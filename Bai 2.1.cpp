#include <stdio.h>

int main (){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	int min;
	min = a;
	if (b<min) {
	min=b;}
	else {min=a;
	}
	if (c<min) {
	min=c;
	}
    else {min=a; 
	}
printf("So be nhat la: %d", min);
}
