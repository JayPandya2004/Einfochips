#include<stdio.h>

void exchange(int arr[],int size){
	for(int i=0; i<size-1; i+=2){
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
}

int main(){
	int arr[6]={20,40,50,60,30,80};
	exchange(arr,6);
	for(int i=0; i<6; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
