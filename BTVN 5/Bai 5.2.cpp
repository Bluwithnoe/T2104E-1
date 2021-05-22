#include<stdio.h>
#include <math.h>

int main(){
	int n,i;
	int tong=0;
    printf("Nhap n=");
    scanf("%d",&n);
    
    for (i = 1; i <= n; i = i+1)
    {
      if(n%i == 0)
      {	
      printf("\nCac uoc cua n la: %d",i);
      tong = tong+i;
      }
     
    }  

    printf("\nTong cac uoc cua n la: %d",tong);

    return 0;
}
    

