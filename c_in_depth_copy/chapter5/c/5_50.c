#include<stdio.h>

int main(){
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	int reverse = 0;
	while(n>0){
		int remainder = n%10;
		reverse = reverse*10 + remainder;
		n/=10;
	}

	printf("Reverse of the number is:%d\n", reverse);
	printf("Double of that number is:%d\n", reverse*reverse);
}
