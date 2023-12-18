#include <stdio.h>

int main(){
	
	 int a;
     printf ("nhap so n:");
     scanf ("%d",&a);
     
     int A;
     
     int max=0;
       	while(a>0){
        A=a%10;
        if (A>max) max=A;
        a=a/10;
    }
     	printf("\nso lon nhat trong a: %d", max);
}	  

