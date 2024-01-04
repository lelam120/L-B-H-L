#include <stdio.h>
#include <string.h>
 
int main () {
   char s[20];
    printf ("nhap mang: \n");
	scanf ("%s",s); 
    
   int l = strlen(s);
 
   for (int i = 0; i < l-1; i++) {
      for (int j = i+1; j < l; j++) {
         if (s[i] > s[j]) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
         }
      }
   }  
   printf("\nChuoi sau khi sap xep %s \n", s);
}
