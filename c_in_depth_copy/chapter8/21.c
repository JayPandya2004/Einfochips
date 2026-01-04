#include<stdio.h>

void reverse(int arr[],int size,int n){
	int temp[size]={};
	int i=0;
	while(n!=0){
		temp[i]=arr[n-1];
		n--;
		i++;
	}

	for(int j=i; j<size; j++){
		temp[j]=arr[j];
	}
	for(int i=0; i<5; i++){
		printf("%d ",temp[i]);
	}
	printf("\n");
}

int main(){
	int arr[5]={10,20,30,40,50};
	reverse(arr,5,3);
}
