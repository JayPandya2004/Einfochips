#include<stdio.h>

int func(int x, int b){
	if(x==5){
		b+=2;
	}
	else if(x>5){
		b+=10;
	}
	return b;
}

int main(){
    printf("Value is : %d\n", func(5,10));    
}   
