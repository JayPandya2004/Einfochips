#include<stdio.h>

int reverse(int num,int rev){
	if(num==0){
		return rev;
	}
	int remainder=num%10;
	rev =  rev*10 + remainder;
	return reverse(num/10,rev);
}

int main(){
	printf("Reverse num is:%d\n",reverse(1234,0));
}
