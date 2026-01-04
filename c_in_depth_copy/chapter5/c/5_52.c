#include<stdio.h>

int reverse(int n);

int main(){
	for(int i=1000; i<=9999; i++){
		int reversed = reverse(i);
		if(reversed == i){
			printf("Number %d is a Pallidrome\n", i);
		}
		else{
			continue;
		}
	}
}

int reverse(int n){
	int reverse=0;
	while(n>0){
		int remainder = n%10;
		reverse = reverse*10 + remainder;
		n/=10;
	}
	return reverse;
}	
