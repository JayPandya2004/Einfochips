#include<stdio.h>

int main(){
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	int sum_of_square = (n*(n+1)*(2*n + 1))/6;
	printf("Result is:%d\n", sum_of_square);
}
