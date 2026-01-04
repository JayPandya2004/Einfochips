#include<stdio.h>

int main(){
	int func(int a, int b){
		return (a+b);
	}

	int c;
	c=func(3,5);
	printf("%d\n",c);
	return 0;
}
