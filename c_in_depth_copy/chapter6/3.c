#include<stdio.h>

int func();

int main(){
	int x=10;
	x=func();
	printf("%d\n", x);	
}

int func(){
	printf("Function\n");
}
