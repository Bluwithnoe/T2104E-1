#include <stdio.h>
#include <math.h>

main()
{
	float von, lai, tong;
      
    printf("\nNhap vao so tien von: ");
    scanf("%f",&von);

      
	printf("\nNhap vao lai suat moi nam: ");
    scanf("%f",&lai);
    
    tong = von*(1+lai)*(1+lai)*(1+lai)*(1+lai);
    
    printf("\nTong so tien thu duoc sau thoi gian gui la: %f",tong);
                  
} 
