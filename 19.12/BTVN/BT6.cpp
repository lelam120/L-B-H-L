#include <stdio.h>

int main(){
	
	 float n;
     printf ("nhap so n:");
     scanf ("%f",&n);
     
     float S;
     
     float i=1;
       	while(i<=n){
        S=S+1/i;
        i++;
    }
     	printf("\ntong S la: %f", S);
}	  

