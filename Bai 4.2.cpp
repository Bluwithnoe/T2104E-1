#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, n;
    float S;
    i = 1;
    n = 1000;
    S = 0;


    while(i <= n)
    {
        S = S + 1.0 / i;  
        i++;
    }
    printf("\nTong 1 + 1/2 + ... + 1/1000 la %f ", S);


    return 0;
}
