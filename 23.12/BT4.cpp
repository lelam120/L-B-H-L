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
	  
	 do {
	  if ((A+C>B)&&(A+B>C)&&(B+C>A)){
	  	int P=A+B+C;
	  	float P2=(float)P/2;
	    float S=sqrt(P2*(P2-A)*(P2-B)*(P2-C));
	        printf("chu vi hinh tam giac la: %d va dien tich hinh tam giac la: %f\n",P,S);
	        break;
	    }else{
	    	printf("chieu dai 3 canh khong hop le moi nhap lai\n");
	    	
	    	printf("nhap vao chieu dai canh thu nhat:");
	        scanf("%d",&A);
	        
	        printf("nhap vao chieu dai canh thu hai:");
	        scanf("%d",&B);
	        
	        printf("nhap vao chieu dai canh thu ba:");
	        scanf("%d",&C);
	  }
     }while (A+C>=B||A+B>=C||B+C>=A);
}	  

