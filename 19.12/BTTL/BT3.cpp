#include <stdio.h>

int main(){
	
	int n;
     printf ("nhap so nguyen to:");
     scanf ("%d",&n);
     
     int i=1;
     
     while (i<=n){
     	if (n%i==0){
     		printf ("uoc so cua n la: %d\n",i);
		 }
		 i++;	
     }
}	  
