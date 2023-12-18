#include <stdio.h>

int main(){
	
	 int n;
     printf ("nhap so de tinh giai thua:");
     scanf ("%d",&n);
     
     int M=1;
     
     int i=1;
     
       	while(i<=n){
        M=M*i;
        i++;
    }
     	printf("\giai thua cua n la: %d", M);
}	  

