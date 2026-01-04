#include<stdio.h>

float sum(int n){
	float sum=0;
	for(int i=1; i<=n; i++){
		sum+=1.0/(i*i);
	}
	return sum;
}

int main(){
	printf("Sum is:%f\n", sum(5));
}
