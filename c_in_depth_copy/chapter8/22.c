#include<stdio.h>

int sort(int arr[],int size){
	 for(int i=0; i<size-1; i++){
                for(int j=0; j<size-1-i; j++){
                        if(arr[j]>arr[j+1]){
                                int temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                        }
                }
        }
	
	for(int i=0; i<size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	for(int i=size-1; i>=0; i--){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[5]={1,4,5,2,3};
	sort(arr,5);
}


