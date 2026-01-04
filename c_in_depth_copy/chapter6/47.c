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

int print(int num1, int num2){
	if(sumPdivisor(num1)==num1){
		printf("Num1 is a perfect number\n");
	}

	else if(sumPdivisor(num2)==num2){
		printf("Num2 is a perfect number\n");
	}

	if(sumPdivisor(num1)==num2 && sumPdivisor(num2)==num1){
		printf("They are amicalbe pair\n");
	}
}

int main(){
	int num1,num2;
	printf("Enter two numbers");
	scanf("%d %d", &num1,&num2);
	print(num1,num2);
}
