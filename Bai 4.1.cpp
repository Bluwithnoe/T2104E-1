#include<stdio.h>
#include <math.h>

int main()
{
    int i, n, S;
    S = 0;
    i = 1;
    n = 100000;
    
    while(i <= n)
    {
        S = S + i;
        i++;
    }
    printf("\nTong 1 + 2 + ... + 100000 la %d. ",S);
    return 0;
}
