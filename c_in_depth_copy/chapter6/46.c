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
	printf("Enter two numbers:");
	int num1,num2;
	scanf("%d %d", &num1,&num2);
	if(sumPdivisor(num1)==num2 && sumPdivisor(num2)==num1){
		printf("Amicable numbers\n");
	}

	else{
		printf("Not a Amicable number\n");
	}
}
