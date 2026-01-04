#include<stdio.h>

void func();
int main(){
	printf("Lucknow\n");
	goto ab;
}

void func(){
	ab:
	printf("Bareilly\n");
}
