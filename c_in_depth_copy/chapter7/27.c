#include<stdio.h>

void firstPyramid(int n){
	if(n==0){
		return;
	}
	firstPyramid(n-1);
	for(int i=1; i<=n; i++){
		printf("%d",i);
	}
	printf("\n");
}

void secondPyramid(int n){
	if(n==0){
		return;
	}
	for(int i=1; i<=n; i++){
		printf("%d",i);
	}
	printf("\n");
	secondPyramid(n-1);
}

void thirdPyramid(int n){
	if(n==0){
		return;
	}

	for(int i=n; i>=1; i--){
		printf("%d", i);
	}
	printf("\n");
	thirdPyramid(n-1);
}
int main(){
	firstPyramid(4);
	printf("----------\n");
	secondPyramid(4);
	printf("----------\n");
	thirdPyramid(4);
	printf("----------\n");
}
