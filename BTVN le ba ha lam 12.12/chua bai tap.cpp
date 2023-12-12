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
	  
	  if ((A+C>B)&&(A+B>C)&&(B+C>A)){
	  	//yes
	  	int P=A+B+C;
	  	//chuyen doi kieu du lieu
	  	//float P2=P/2.0 canh 1
	  	//float P2=(float)P/2; canh 2
	  	float P2=(float)P/2;
	    float S=sqrt(P2*(P2-A)*(P2-B)*(P2-C));
	        //printf("chu vi hinh tam giac la: %d\n",P);
	        //printf("dien tich hinh tam giac la: %f\n",S);
	        printf("chu vi hinh tam giac la: %d va dien tich hinh tam giac la: %f\n",P,S);
	    }else{
	  	//no
	  	printf("ba canh da nhap khong tao thanh 1 tam giac");
	  }  	
}
	  	
	  

