#include <stdio.h>

int main(){
	
	int n;
     printf ("nhap so nguyen to:");
     scanf ("%d",&n);
     int C;
     
     for (int i=1; i<=n; i++){
     	if (n%i==0){
     		C=C+i;	
		}	
     }
     int T=C-n;
     if (T==n){
     	printf ("so %d la so hoan hao",n);
	 }else{
	 	printf ("so %d khong phai la so hoan hao",n);
	 }
}	  

