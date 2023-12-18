#include <stdio.h>

int main(){
	
	int a;
     printf ("nhap so nguyen duong a:");
     scanf ("%d",&a);
     
    int A;
      
    if (a>0){
     	while(a = a / 10){
        A = a % 10;
    }
     	printf("\nso dau tien la: %d", A);
	 }else{
	 printf ("so a phai lon hon 0");
}
}	  

