#include <stdio.h>
#include <string.h>

int main(){
	char s[20];
    printf ("nhap mang: \n");
	scanf ("%s",s);
	
	strupr(s);
	
    printf("\nChuoi chu hoa la: %s",s);
}

