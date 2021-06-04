#include <stdio.h>

bool kiemtrasonguyento(int n){
	if(n<2) return false;
	if(n < 4) return true;
	
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{ 
			return false;
		}
	}
	return true;
}

int songuyentotieptheo(int n)
{
	for(int i=n+1;true;i++)
	{
		if(kiemtrasonguyento(i))
		{
			return i;
		}
	}
}

int main() {
	int k;
	printf("Nhap so k: ");
	scanf("%d",&k);
	int snttiep = songuyentotieptheo(k);
	printf("So nguyen to tiep theo sau k la: %d\n",snttiep);
}
