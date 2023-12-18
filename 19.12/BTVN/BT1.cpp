#include <stdio.h>

int main(){
	
	int n;
     printf ("nhap so nguyen to:");
     scanf ("%d",&n);
     
    int S=0;
     
    int i=1;
     
     while (i<=n){
     	if (n%i==0){
     		S= S + i;
		 }
		 i++;	
     }
    printf ("tong cac uoc cua n la: %d",S);
}	  
