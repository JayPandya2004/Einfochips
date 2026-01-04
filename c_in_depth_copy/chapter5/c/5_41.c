#include<stdio.h>

int main(){
	for(int i=1; i<=5; i++){
		printf("%d ",i);
	}
	printf("\n");
        printf("----------\n");
	
	int i=1;
	while(i<=5){
		printf("%d ", i);
		i++;
	}
        printf("\n");
	printf("----------\n");
	
	i=1;
	do{
		printf("%d ", i);
		i++;
	}while(i<=5);
	printf("\n");
        printf("----------\n");

}
