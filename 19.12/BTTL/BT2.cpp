#include <stdio.h>

int main(){
	
	int n;
     printf ("nhap so nguyen to:");
     scanf ("%d",&n);
     
     int i=n-1;
     
     while (i<n&&i>=0){
     	if (i%2==0&&i%3==0){
     		printf ("so be hon n, chia het cho ca 2 va 3 la: %d\n",i);
     		break;
		 }
		 i--;	
     }
}	  
