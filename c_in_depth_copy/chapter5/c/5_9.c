#include<stdio.h>

int main(){
	int x = 0, a = 10, b = 20;
	if(a<b){
		x = x + (-x);
	}
	else{
		x += 100;
	}
	printf("%d\n", x);
}
