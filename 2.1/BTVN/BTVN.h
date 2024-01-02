
//sap xep mang n so nguyen
void xuat_mang_sap_xep(int a[], int n{
  printf("NHAP VAO n PHAN TU: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
    
    for (int i=0; i<n-1; i++){
		for (int j=0; j<n-i-1; j++){
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	printf("mang sau khi sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%d \t",a[i]);
	}
	return 1;
}

//sap xep mang n so nguyen
bool kiem_tra_x(int a[], int n, int x)
{   printf("NHAP VAO n PHAN TU: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
    
    printf("NHAP VAO x TIM KIEM TRONG MANG: ");
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
        if (a[i]==x){
        	return true;
		}
		return false;
}

//ham in ra danh sach gia tri cua mang
void xuat_mang_sap_xep(int a[], int n){
   printf("NHAP VAO n PHAN TU: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
    return 1;
}

//ham tinh trung binh cong cua mang
void xuat_mang_sap_xep(int a[], int n){
   printf("NHAP VAO n PHAN TU: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
  
  int sum=0;
   for(int i = 0; i < n; i++){
        sum=sum+a[i];
    }
    float tbc=(float)sum/n;
    printf("TRUNG BINH CONG CUA MANG LA: %f",tbc);
    return 1;
}

//ham tim uoc chung lon nha cua cac phan tu
void xuat_mang_sap_xep(int a[], int n){
  printf("NHAP VAO n PHAN TU: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
    
    for (int i=0; i<n-1; i++){
		for (int j=0; j<n-i-1; j++){
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	
	for (int i=a[n];i>0;i--){
		if (i%a==0&&i%b==0){
			return i;
		}
	}
	return 1;
}

//ham dao lai cac phan tu cua mang
void xuat_mang_sap_xep(int a[], int n){
  printf("NHAP VAO n PHAN TU: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        printf("NHAP A[%d]: ",i);
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
	return 1;
}


