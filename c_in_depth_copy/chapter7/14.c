#include<stdio.h>

void reverse(){
	char txt;
	scanf("%c",&txt);
	if(txt!='\n'){
		reverse();
		printf("%c",txt);
	}
}

int main(){
	printf("Enter the character:");
	reverse();
}

