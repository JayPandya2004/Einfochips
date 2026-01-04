#include<stdio.h>
#include <stdbool.h>

int sumPerfect(int num,int i){
	if(num==i){
		return 0;
	}
	int sum=0;
	if(num%i==0){
		return i + sumPerfect(num,i+1);
	}
	else{
		return sumPerfect(num,i+1);
	}
}

bool isPerfect(int n){
	if(n==sumPerfect(n,1)){
		return true;
	}
	return false;
}

int main(){
	if(isPerfect(28)){
		printf("Perfect Number\n");
	}
	else{
		printf("Not a perfect number\n");
	}
}
