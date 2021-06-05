#include <stdio.h>
#include <string.h>


void upperCase (char s[]) {
	for (int i=0;i<strlen(s);i++)
   {
   		if (s[i]>=97 && s[i]<=122)
   		{
   			s[i] = s[i] - 32;
	   	}
   }
   printf("\nChuoi sau khi chuyen doi la: %s",s);
}

int main() {
   
   char str[100];     
   printf("Nhap chuoi ky tu can chuyen doi: ");
   gets(str);
   
   upperCase(str);
   
}
