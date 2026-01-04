#include<stdio.h>

int sum(int n){
	int num;
	if(n==0){
		return num;
	}
	printf("Enter the number:");
	scanf("%d",&num);
	return num+sum(n-1);
}

int main(){
	printf("%d\n",sum(4));
}
