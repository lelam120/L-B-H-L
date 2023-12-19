#include <stdio.h>

int main(){
	
	int a;
     printf ("nhap so nguyen to a:");
     scanf ("%d",&a);
     
     int b;
     printf ("nhap so nguyen to b:");
     scanf ("%d",&b);
     
     int GCD (a,b);
     
     int i;
	  if (a>b){
	  	i=b;
	  }else{
	  	i=a;
	  }    
    
     while (i>=0){
     	if (a%i==0&&b%i==0){
     		printf ("uoc chung lon nhat cua a,b la: %d",i);
     		break;
		 }
		 i--;	
     }
     
     int BCNN=(a*b)/i;
     printf ("\nboi chung nho nhat cua a,b la: %d",BCNN);
}	  

