#include<stdio.h>

int main(){
	for(int i=1; ; i++){
		if(i>5){
			break;
		}
		printf("%d", i);
	}
	printf("\n");
	printf("----------\n");

	int i=1, j=3;
	while(i<3){
		if(j==0){
			break;
		}
		printf("%d ", i++, j--);
	}
	printf("\n");
        printf("----------\n");

	for(int i=2, i<sqrt(n); i++){
		if(n%i == 0){
			break;
		}
	}
	printf("\n");
	printf("----------\n");


}
