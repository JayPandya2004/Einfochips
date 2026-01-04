#include<stdio.h>

int main(){
	for(int i=1; i<=7; i++){
		for(int j=1; j<=7; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("--------------------\n");

	for(int i=1; i<=7; i++){
		for(int j=1; j<=7; j++){
			if(i!=1 && i!=7){
				if(j!=1 && j!=7){
					printf(" ");
				}
				else{
					printf("*");
				}
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	printf("--------------------\n");

	for(int i=1; i<=7; i++){
		for(int j=1; j<=7; j++){
			if(i==j){
				printf("\\");
			}
			else if(i+j == 8){
				printf("/");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	printf("--------------------\n");
}
