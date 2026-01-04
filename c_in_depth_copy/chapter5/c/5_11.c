#include<stdio.h>

int main(){
	int x = 0, y =1;
	if(x==0){
		y++;
	}
	if(x>0){
		y--;
	}
	else{
		y+=2;
	}
	printf("%d\n", y);
}
