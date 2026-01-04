#include<stdio.h>
#include <stdbool.h>


bool isPrime(int num){
	int count=0;
	for(int i=1; i<=num; i++){
		if(num%i==0){
			count++;
		}

		if(count>2){
			return false;
		}
	}

	if(count==2){
		return true;
	}

	return false;
}

int main(){
	for(int i=2; i<1000; i++){
		if(isPrime(i) && isPrime(i+2)){
			printf("%d, %d\n", i,i+2);
		}
	}
}
