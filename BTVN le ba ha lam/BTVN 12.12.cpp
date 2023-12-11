#include <stdio.h>
#include <math.h>

int main(){
	
		 
	  int A;
	  printf("nhap vao chieu dai canh thu nhat:");
	  scanf("%d",&A);
	  
	  int B;
	  printf("nhap vao chieu dai canh thu hai:");
	  scanf("%d",&B);
	  
	  int C;
	  printf("nhap vao chieu dai canh thu ba:");
	  scanf("%d",&C);
	  
	  int P;
	  P = A+B+C;
	  
	  float S;
	  S = sqrt((P/2)*((P/2)-A)*((P/2)-B)*((P/2)-C));
	  
	  if (A+B>C){
	  	//yes
	  	if (A+C>B){
	  		//yes
	  		if (B+C>A){
	  			//yes
	  			printf("chu vi hinh tam giac la: %d\n",P);
	  			printf("dien tich hinh tam giac la: %f\n",S);
			  }else{
			  	//no
	  	        printf("ba canh da nhap khong tao thanh 1 tam giac");
			  }
		  }else{
		  		//no
	  	        printf("ba canh da nhap khong tao thanh 1 tam giac");
		  }
	  }else{
	  	//no
	  	printf("ba canh da nhap khong tao thanh 1 tam giac");
	  }  	
}

	  	
	  

