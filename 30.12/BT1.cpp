#include <stdio.h>

int main(){
	int n;
	printf("Nhap kich thuoc mang: \n");
	scanf("%d",&n);
	int a[n];

	printf("NHap gia tri cho mang: \n");
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		}
		
	int start=0;
	int end=n-1;
	while (start<end){
		int temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
	}
printf ("\nmang dao nguoc la:\n ");
for (int i=0;i<n;i++){
	printf ("%d\t",a[i]);
}
	}
