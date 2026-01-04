#include<stdio.h>

int func(int a){
	if(a<0){
		a = -a;
	}
	return a;
}

int main(){
    printf("Value is : %d\n", func(-3));
} 
