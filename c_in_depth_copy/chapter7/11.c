#include<stdio.h>

int f(char *s,char a){
	if(*s=='\0'){
		return 0;
	}
	if(*s==a){
		return 1 + f(s+1+a);
	}
	return f(s+1,a);
}

int main(){
	char str[100],a;
	printf("Enter a string");
	gets(str);
	printf("Enter the character:");
	scanf("%c",&a);
	printf("%d\n",f(str,a));
	return 0;
}
