#include<stdio.h>

int main(){
	for(int i=1; i<=6; i++){
		printf("*");
	}
	printf("\n");
	printf("----------\n");

	for(int j=1; j<=5; j++){
		for(int i=1; i<=6; i++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("---------\n");

	for(int j=1; j<=5; j++){
		for(int i=1; i<=6; i++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("----------\n");

	for(int k=1; k<=3; k++){
		for(int j=1; j<=5; j++){
			for(int i=1; i<=6; i++){
				printf("*");
			}
			printf("\n");
		}
	}
	printf("\n");

}
