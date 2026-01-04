#include<stdio.h>

int isLeap(int year){
	if(year%4==0){
		return 1;
	}
	return 0;
}

int main(){
	printf("Year 2000:%d\n", isLeap(2000));
}
