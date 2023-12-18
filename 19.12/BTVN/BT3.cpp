#include <stdio.h>

int main(){
	
	int a;
     printf ("nhap so nguyen to a:");
     scanf ("%d",&a);
     
     int A;
    
     int i = 0;
    
    while(a > 0){
        A = a % 10;
        i = i + A;
        a = a / 10;
    }
    printf("\ntong cac so cua a la: %d", i);
}	  

