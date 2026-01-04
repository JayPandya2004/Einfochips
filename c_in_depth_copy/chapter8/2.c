#include<stdio.h>

int main(){
	int arr[4]={2,4,6,16},i=3,j=0;
	while(i){
		j+=arr[i];
		i--;
	}
	printf("j=%d\n",j);
}
