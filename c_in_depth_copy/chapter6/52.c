#include<stdio.h>

void lowerToUpper(char ch){
	if(ch>='a' && ch<='z'){
		ch-=32;
	}
	printf("Character is %c\n", ch);
}

int main(){
	char ch;
	printf("Enter the character");
	scanf("%c", &ch);
	lowerToUpper(ch);
}
