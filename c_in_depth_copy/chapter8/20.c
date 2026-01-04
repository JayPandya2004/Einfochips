#include<stdio.h>

void largestAndSLargest(int arr[],int size){
	for(int i=0; i<size-1; i++){
		for(int j=0; j<size-1-i; j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Largest element is %d and Second Largest Element is %d\n",arr[size-1],arr[size-2]);

}

int main(){
	int arr[5]={50,40,30,20,10};
	largestAndSLargest(arr,5);
}
