#include <stdio.h>

int main(){
	
	int n;
     printf ("nhap so nguyen to:");
     scanf ("%d",&n);
     
     int i;
     
     while (i<n){
     	i++;
     	if (i%2!=0){
	 	printf ("cac so le nho hon n: %d\n",i);
	    } 
    }	 
}
