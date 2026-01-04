#include<stdio.h>



int reverse(int n) {
	int rev = 0;
	while (n != 0) {
		int digit = n % 10;
		rev = rev * 10 + digit; 
	       	n = n / 10; 
	}
       	return rev; 
}
int isPalindrome(int num){
	if(num==reverse(num)){
	       	return 1;
	}
       	return 0;
}

int main(){
 	printf("Value is: %d\n", isPalindrome(101));
}
