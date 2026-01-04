#include<stdio.h>

int main(){
	int a = 10, b = 20, c = 30;
	if(a==10){
		if(b==20){
			if(c==30){
				printf("a is 10, b id 20, c is 30\n");
			}
		}
		else{
			printf("a is 10 but b is not 20\n");
		}

	}
	else{
		printf("a is not 10\n");
	}

}
