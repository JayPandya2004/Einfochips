#include<stdio.h>

int main(){
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n+4; j++){
			if(i%2!=0 && j%2!=0){
				printf("*");
			}
			else if(i%2==0 && j%2==0){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
}
