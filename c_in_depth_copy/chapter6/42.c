#include<stdio.h>

int prodDigits(int num){
	int product=1;
	while(num!=0){
		int digit=num%10;
		product*=digit;
		num/=10;
	}
	return product;
}

int main(){
	int num;
	printf("Enter the number:");
	scanf("%d", &num);
	printf("Ans is:%d\n", prodDigits(num));
}
