#include<stdio.h>

int func(int a, int b){
	a=a-b;
	if(a!=2){
		return ++a;
	}
	a=a+b;
	printf("%d\n" ,a);
	return b;
}

int main(){
	printf("%d\n", func(5,3));	
}
