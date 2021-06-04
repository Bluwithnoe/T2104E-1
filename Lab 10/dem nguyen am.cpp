#include <stdio.h>
#include <string.h>

int main() {
   char s[50];     
   int i = 0;
   int vowels = 0;            
   int consonants = 0;        
      
   printf("Nhap chuoi ky tu: ");
   scanf("%s",s);
   while(s[i++] != '\0') 
   {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
         vowels++;
      else
         consonants++;
   }
   
   printf("\nChuoi '%s' co chua: %d nguyen am va %d phu am.\n", s, vowels, consonants);

   return 0;
}
