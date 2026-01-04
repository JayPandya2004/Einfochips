#include<stdio.h>

int func(int a, int b){
	a=a-b;
	return a;
}

int main(){
    printf("Value is : %d\n", func(1,2));
} 
