#include<stdio.h>

int func(int n){
	if(n==39){
		n=n+5;
	}
	return n;
}

int main(){
	printf("Value of n is : %d\n", func(38));
}


