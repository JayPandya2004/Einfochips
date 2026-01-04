#include<stdio.h>
#include<limits.h>

int main(){
	int a =400000000;
	unsigned b = 400000000;
	printf("a=%d , b=%u\n",a,b);
	printf("a=%d , b=%u\n",INT_MAX,UINT_MAX);
	return 0;
}
/*Output:-a=400000000 , b=400000000
	  a=2147483647 , b=4294967295*/

