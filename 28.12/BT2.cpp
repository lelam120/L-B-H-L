#include<stdio.h>

int main(){
	int n,c,x,giua ,low = 0;
	int co = 0;
	printf("nhap so n");
	scanf("%d",&n);
	int a[n];
	int hight = n;
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
	while (low < hight - 1 ){
		giua = low + ( hight - low )/2;
		if (a[giua] < x ){
			
			low = giua ;
			
		}else if( a[giua] == x ) {
		     
		     co = 1;
		     break;
		    
		
	    }else{
	    	
	    	hight = giua ;
		}
		
	}
	if (co == 1 ){
		if (a[hight] - x > x - a[low]){
			
			printf("so gan nhat voi x la %d ",a[low]);
			
		}else{
			
			printf("so gan nhat voi x la %d ",a[hight]);
			
		}
			
	}else{
		if (a[hight] - x > x - a[low]){
			
			printf("so gan nhat voi x la %d ",a[low]);
			
		}else{
			
			printf("so gan nhat voi x la %d ",a[hight]);
			
		}	
	}
}
