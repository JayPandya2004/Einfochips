#include<stdio.h>

int main(){
	for(int i=1; i<=5; i++){
		if(i==3){
			continue;
		}
		printf("%d\n", i);
	}
	printf("\n");
        printf("----------\n");
	
	int i=1;
	while(i<=5){
		if(i==3)
			continue;
		printf("%d\n", i);
		i++;
	}
	printf("\n");
        printf("----------\n");
	
	i=1;
	do{
		if(i==3)
			continue;
		printf("%d\n", i);
		i++;
	}while(i<=5);
}
