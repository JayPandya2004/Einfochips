#include<stdio.h>

int main(){
	int a = 5 , b = 5;
	printf("a=%d , b=%d\t" , ++a,b--);
	printf("a=%d , b=%d\t" , a,b);
	printf("a=%d , b=%d\t" , ++a,b++);
	printf("a=%d , b=%d\n" , a,b);
	return 0;
}
/*Output:a=6 , b=5	a=6 , b=4	a=7 , b=4	a=7 , b=5*/
