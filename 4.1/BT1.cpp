#include <stdio.h>
#include <string.h>

int main(){
	char s[20];
    printf ("nhap mang: \n");
	scanf ("%s",s);
	
	int kt = strlen(s); //do dai thuc te cua chuoi
	for (int i=0;i<kt-i-1;i++){
		char tmp=s[i];
		s[i]=s[kt-i-1];
		s[kt-i-1]=tmp;
	}
printf ("sau khi dao nguoc: %s",s);
}

