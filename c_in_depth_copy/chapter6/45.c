#include<stdio.h>

int sumPdivisor(int num){
	int sum=0;
	for(int i=1; i<num; i++){
		if(num%i==0){
			sum+=i;
		}
	}
	return sum;
}

int main(){
	printf("Enter the number");
	int num;
	scanf("%d", &num);
	if(num==sumPdivisor(num)){
		printf("It is a perfect number\n");
	}
	else{
		printf("It is not a perfect number\n");
	}
}
