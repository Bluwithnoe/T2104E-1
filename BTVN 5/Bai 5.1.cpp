#include<stdio.h>
#include <math.h>

int main(){
	int n,i;
    printf("Nhap n=");
    scanf("%d",&n);

    for (i = 1; i < n; i = i+1)
    {
      if(i%2 == 0)

      {
	
      printf("\nNhung so chan be hon n la: %d",i);

      }
    }  

    return 0;
}
