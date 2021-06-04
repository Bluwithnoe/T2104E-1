#include <stdio.h>

int timsodaonguoc(int n){
	int m = 0;
	for( ;n!=0;n/=10){
		m = m*10 + n%10;
	}
	return m;
}

int main(){
	int k;
	printf("Nhap so can tim dao nguoc: ");
	scanf("%d",&k);
	
	int daonguoc = timsodaonguoc(k);
	printf("So dao nguoc: %d\n",timsodaonguoc(k));
}
