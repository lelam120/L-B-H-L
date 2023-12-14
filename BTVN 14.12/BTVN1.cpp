#include <stdio.h>
#include <math.h>

int main(){
	
		 
	  float KG;
	  printf("nhap can nang cua ban (kg):");
	  scanf("%f",&KG);
	  
	  float M;
	  printf("nhap chieu cao cua ban (m):");
	  scanf("%f",&M);
	    	
	    	float BMI=KG/(M*M);
	    	
	    	if (BMI<18.5){
	    		printf ("nhe can");
			}else if (BMI>=18.5&&BMI<=24.9){
				printf ("binh thuong");
			}else if (BMI>=25&&BMI<=29.9){
				printf ("thua can");
			}else{
				printf ("beo phi");
			}
}

	  	
	  

