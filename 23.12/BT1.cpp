#include <stdio.h>

int main(){
	
	int n;
     printf ("nhap so n:");
     scanf ("%d",&n);	

    if (n<2){
    	printf ("so %d khong phai so nguyen to",n);
	}
	
	int S=0;
	for (int i=1;i<=n;i++){
		if (n%i==0){
			S++;
		}
	}
	
	if (S=2){
		printf ("so %d la so nguyen to",n);
	}else{
		printf ("so %d khong phai so nguyen to",n);
	}
}	  

