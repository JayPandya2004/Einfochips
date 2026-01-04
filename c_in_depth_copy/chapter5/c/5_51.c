#include<stdio.h>

int main(){
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	int original = n;
	int reverse=0;
	while(n>0){
		int remainder=n%10;
		reverse = reverse*10 + remainder;
		n/=10;
	}

	if(reverse == original){
		printf("number is pallidrome\n");
	}
	else{
		printf("Number is not a pallidrome\n");
	}
}
