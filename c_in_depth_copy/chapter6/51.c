#include<stdio.h>

int check(char val){
	if((val>='A' && val<='Z') || (val>='a' && val<='z') || (val>='0' && val<='9')){
		printf("It is a alphanumeric number\n");
	}
	else{
		printf("It is not a alphanumeric number\n");
	}
}

int main(){
	char val;
	printf("Enter the val");
	scanf("%c", &val);
	check(val);
}
