#include<stdio.h>

int main(){
	printf("--------------------\n");
	for(int i = 10; i<=50 ; i+=10){
		printf("%d ", i);
	}
	printf("\n");
	printf("--------------------\n");
	for(int i = -10 ; i>=-70 ; i-=10){
		printf("%d ", i);
	}
	printf("\n");

	printf("--------------------\n");
	int result = 0;
	for(int i=1 ; i<=5 ; i++){
		result = result*10 + 1;
		printf("%d ", result);
	}
	printf("\n");

	printf("--------------------\n");
	result=1;
	for(int i = 1 ; i<=5 ; i++){
		printf("%d ", result);
		result = result + i;
	}
	printf("\n");

	printf("--------------------\n");
	for(int i=10 ; i>=-5 ; i-=3){
		printf("%d ", i);
	}
	printf("\n");

	printf("--------------------\n");
	int i = 1;
	result=1;
	do{
		printf("%d ",result);
		result = result*2;
		i++;
	}while(i<=5);
	printf("\n");

}
