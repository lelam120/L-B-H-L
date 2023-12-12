#include <stdio.h>
#include <math.h>

int main(){
	
		 
	  int a;
	  printf("nhap a:");
	  scanf("%d",&a);
	  
	  int b;
	  printf("nhap b:");
	  scanf("%d",&b);
	  
	  int c;
	  printf("nhap c:");
	  scanf("%d",&c);
	  
	  if (a!=0){
	  	int D=pow(b,2)-4*a*c;
	  	if (D>0||D==0){
	  		if (D>0){
	  			float x1=(-(float)b+sqrt(D))/2*(float)a;
	  			float x2=(-(float)b-sqrt(D))/2*(float)a;
	  			printf (" D>0, phuong trinh co 2 nghiem x1= %f va x2= %f\n",x1,x2);
			  }else{
			  	float x1;
			  	float x2;
			  	x1=x2=-(float)b/2*(float)a;
			  	printf ("D=0, phuong trinh co 1 nghiem x1=x2= %f\n",x1,x2);
			  }
		  }else{
		  	printf ("D<0, phuong trinh vo nghiem");
		  }	  
	  }else{
        if (b==0){
        	if(c==0){
        		printf ("phuong trinh co vo so nghiem");
			}else{
				printf ("phuong trinh vo ly");
			}
		}else{
			float x=-(float)c/b;
			printf ("phuong trinh co 1 nghiem x= %f",x);
		}
	  }  	
}

	  	
	  

