#include<stdio.h>

int main(){
	int n,c,x ;
	printf("nhap so n");
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i<n;i++){
		scanf("%d",&c);
		a[i] = c;		
	}
	printf("nhap so x = ");
	scanf("%d",&x);
	for (int i = 0 ;i<n-1;i++){
		for (int j=0 ; j<n-1-i ;j++ ){	
			if (a[j] > a[j+1] ){
				int dem = a[j+1];
				a[j+1] = a[j];
				a[j] = dem;			
			}
			
		}
			
	}
	
	if ( x -  a[0] < a[n-1] - x){
		
		printf("so co gia trinh xa nhat la %d",a[n-1]);
		
		
	}else {
		
		printf("so co gia trinh xa nhat la %d",a[0]);
		
	}
	
	
}
