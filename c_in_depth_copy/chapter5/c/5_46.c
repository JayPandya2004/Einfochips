#include<stdio.h>

int main(){
	int count=0;
	for(int i=1; i<=80; i++){
		if(count == 8){
			printf("\n");
			count=0;
		}
		count++;
		printf("%d\t", i);
	}
	printf("\n");
}
