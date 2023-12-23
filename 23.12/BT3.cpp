#include <stdio.h>

int main(){
	
	int n;
     printf ("nhap so:");
     scanf ("%d",&n);
     
     do {
     	if (n>=1&&n<=100){
     		printf ("so %d la so tu 1 den 100",n);
			break;
		}else{
			printf ("nhap lai so:");
            scanf ("%d",&n);
		}	
     }while (n<1||n>100);
}	  

