#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int i, n;
	long long gt=1;

	printf("Nhap so de tinh giai thua: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	gt = gt*i;

	printf("Giai thua cua %d la %lld\n", n, gt);

 return 0;

}
