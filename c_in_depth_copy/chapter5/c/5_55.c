#include<stdio.h>

int main(){
	int n;
	printf("Enter the number:");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(i%3 == 0){
			printf("Cube of number %d is:%d\n", i,i*i*i);
		}
		else{
			continue;
		}
	}
}
