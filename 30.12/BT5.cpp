#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang: \n");
	scanf("%d",&n);
	
	int arr[n];
	printf("NHap gia tri cho mang: \n");
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	int max=a[0];
	int S=0;
	for (int i=0;i<n;i++){
		for (int j=1;j<a[i];j++){
			if (a[i]%j==0&&a[i]>1){
				S++;
			}else if
		}
		}
	}

}
