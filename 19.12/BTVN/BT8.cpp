#include <stdio.h>

int main(){
	
	int n;
     printf ("nhap so thu n:");
     scanf ("%d",&n);
     
    int f0=0;
     
    int f1=1;
     
    int fn=1;
     
    int i=2;
     
       	while(i<=n){
        fn=f0+f1;
        f0=f1;
        f1=fn;
        i++;
    }
     	printf("\nso thu n trong day Fibonaci la: %d", fn);
}	  

