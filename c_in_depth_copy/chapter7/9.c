#include<stdio.h>

int func(int n){
	return (n) ? n%10 + func(n/10) : 0;
}

int main(){
	printf("%d\n",func(14837));
}

