#include<stdio.h>

int func(int m, int n){
	if(m==5){
		return n-10;
	}
	else if(m>5){
		return n+20;
	}
	return n;
}

int main(){
	printf("Value is:%d\n", func(5,1));
}
