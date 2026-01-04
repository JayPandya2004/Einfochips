#include<stdio.h>

int sumPdivisors(int num){
	int i=1;
	int sum=0;
	while(i<=num){
		if(num%i==0 && i!=num){
			sum+=i;
		}
		i++;
	}
	return sum;
}

int main(){
	printf("Sum is: %d\n", sumPdivisors(10));
}

