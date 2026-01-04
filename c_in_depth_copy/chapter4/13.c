#include<stdio.h>

int main(){
	int a, b, c, d;
	a=b=c=d=4;
	a *= b+1;
	c += d*=3;
	printf("a=%d, b=%d\n", a,c);
	return 0;
}
//Output:a=20, b=16
