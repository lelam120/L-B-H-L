#include <stdio.h>

int main(){
	
	int n;
	printf ("nhap vao so phan tu cua mang:");
	scanf ("%d",&n);
	
    int a[n];
    for (int i = 0; i < n; i++){
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
    
}
   int even = -1;
  for (int i = n - 1; i >= 0; i--) {
    if (a[i] % 2 == 0) {
      even = i;
      break;
    }
}
  
  if (even != -1) {
    printf("so chan cuoi trong mang là %d", a[even]);
  } else {
    printf("Khong co so chan trong mang");
  }
}


