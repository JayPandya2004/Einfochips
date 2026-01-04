#include<stdio.h>
#include<stdbool.h>

int cubesum(int n);
void printArmstrong();
bool isArmstrong(int num);

int main(){
	printArmstrong();
}


int cubesum(int n){
	int sum = 0;
	while(n!=0){
		int digit=n%10;
		sum=sum + digit*digit*digit;
		n/=10;
	}
	return sum;
}

void printArmstrong(){
	for(int i=1; i<=9; i++){
		printf("%d\n", i);
	}

	for(int i=10; i<=500; i++){
		if(isArmstrong(i)){
			printf("%d\n", i);
		}
	}
}

bool isArmstrong(int num){
	if(cubesum(num) == num){
		return 1;
	}
	return 0;
}


