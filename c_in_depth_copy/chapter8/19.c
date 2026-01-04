#include<stdio.h>

int difference(int arr[], int size){
	int max=arr[0],min=arr[0];
	for(int i=0; i<size-1; i++){
		if(arr[i]<arr[i+1]){
			max=arr[i+1];
		}

		if(arr[i]>arr[i+1]){
			min=arr[i+1];
		}
	}
	return max-min;
}

int main(){
	int arr[5]={5,4,3,2,1};
	printf("Difference is %d\n",difference(arr,5));
}
