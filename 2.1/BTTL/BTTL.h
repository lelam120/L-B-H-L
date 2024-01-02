//tinh chu vi tam giac
int chu_vi (int a,int b,int c){
	if (a+b>c&&a+c>b&&b+c>a){
	int d=a+b+c;
	return d;
}
    printf ("3 canh khong tao thanh tam giac");
}

//tinh dien tich tam giac
float dien_tich (float A,int B,int C){
	if (A+B>C&&A+C>B&&B+C>A){
	float p=(A+B+C)/2;
	float S=sqrt(p-(p-A)*(p-B)*(p-C));
	return S;
}
	printf ("3 canh khong tao thanh tam giac");
}

//tinh dien tong cac so n
int sum_n (int n){
	int Sum=0;
	do{
		int Sum=Sum+n%10;
		n=n/10;
}while(n!=0);
	return Sum;
}

//tim ucln
int ucln (int a,int b){
	for (int i=a;i>0;i--){
		if (i%a==0&&i%b==0){
			return i;
		}
	}
	return 1;
}

//tim boi chung nho nhat
int bcnn (int a,int b){
	for (int i=a; ;i++){
		if (i%a==0&&i%b==0){
			return i;
		}
	}
	return a*b;
}

//tim gtln cua mang
int max (int arr[], int n){
	int h=arr[0];
	for (int i=1;i<n;i++){
		if (h<arr[i])
			h=arr[i];
	}
	return h;
}

//nhap cac gia tri cho 1 mang n so nguyen
void xuat(int a[], int n)
{   printf("NHAP VAO n PHAN TU: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
    return 1;
}
