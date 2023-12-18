#include <stdio.h>

int main(){
	
	int n;
	printf ("nhap so nguyen to:");
    scanf("%d", &n);
    
    int A;
    
    int i = 0;
    
    while(n > 0){
        A = n % 10;
        i = i * 10 + A;
        n = n / 10;
    }
    printf("\nso dao nguoc la: %d", i);
}	  
