#include<stdio.h>

int main(){
	int i=0;
	while(i<=5){
		i++;
		printf("%d ", i);
	}
	printf("\n");
	printf("----------\n");

	i=0;
	do{
		i++;
		printf("%d ", i);
	}while(i<=5);
	printf("\n");
	printf("----------\n");
}
