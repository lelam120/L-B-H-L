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

	for (int i = 0 ;i<n-1;i++){
		for (int j=0 ; j<n-1-i ;j++ ){	
			if (a[j] > a[j+1] ){
				int dem = a[j+1];
				a[j+1] = a[j];
				a[j] = dem;			
			}
			
		}
			
	}
	printf("doan chua tat ca gia tri trong mang la [%d,%d] ",a[0],a[n-1]);
	
}
