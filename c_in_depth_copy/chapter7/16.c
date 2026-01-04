#include<stdio.h>

int sum(int num,int i){
	int sumn=0;
	if(i==num){
		return 0;
	}
	if(num%i==0){
		printf("%d ",i);
		sumn+=i;
	}
	return sumn + sum(num,i+1);
}

int main(){
	printf("%d\n",sum(45,1));
}
