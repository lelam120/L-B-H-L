#include <stdio.h>

int main(){
	
		 
	  char chr;
	  printf("nhap vao ky tu:");
	  scanf("%c",&chr);
	    	
	    	if ((chr>='A')&&(chr<='Z')){
	    		printf ("day la chu in hoa");
			}else if ((chr>='a')&&(chr<='z')){
				printf ("day la chu in thuong");
			}else if ((chr>='0')&&(chr<='9')){
				printf ("day la so");
			}else{
				printf ("day la ky tu dac biet");
			}
}

	  	
	  

