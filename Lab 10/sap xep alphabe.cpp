#include <stdio.h>
#include <string.h>

void sapxepalphabe(char arrs[][50],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++)
		{
			// kiem tra 2 phan tu arrs[j] va arrs[j+1]
			if(strcmp(arrs[j],arrs[j+1]) >0) // swap 2 phan tu cho nhau
			{
				char tmp[50];
				strcpy(tmp,arrs[j]);
				strcpy(arrs[j],arrs[j+1]);
				strcpy(arrs[j+1],tmp);
			}
		}
	}
}

void nhapstring(char s[])
{
	printf("Nhap chuoi: ");
	scanf("%s",s);
}
void nhapmangstring(char arrs[][50],int n)
{
	for(int i=0;i<n;i++)
	{
		nhapstring(arrs[i]);
	}
}

void inmangstring(char arrs[][50],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%s\n",arrs[i]);
	}
}

int main(){
	int n;
	printf("Nhap kich thuoc mang: ");
	scanf("%d",&n);
	char arrs[n][50];// khai bao 1 mang n string
	
	nhapmangstring(arrs,n);
	
	sapxepalphabe(arrs,n);
	printf("Sau khi sap xep:\n");
	inmangstring(arrs,n);
}
