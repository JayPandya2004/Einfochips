#include<stdio.h>

void bubbleSort(int arr[],int size){
	for(int i=0; i<size-1; i++){
		for(int j=0; j<size-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void selectionSort(int arr[],int size){
	int min=arr[0];
	for(int i=0; i<size-1; i++){
		for(int j=i; j<size-1; j++){
			if(arr[j]<min){
				arr[i]=arr[j];
				min=arr[j];
			}
		}
	}
}


void insertionSort(int arr[], int n) { 
	for (int i = 1; i < n; i++) {
	       	int key = arr[i]; // element to be inserted 
		int j = i - 1; // shift elements greater than key to one position ahead 
		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j]; j--;
	       	}
	       	arr[j + 1] = key; // place key at correct position
	 }
}
int main(){
	int arr[5]={50,40,30,20,10};
	bubbleSort(arr,5);
	for(int i=0; i<5; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	selectionSort(arr,5);
 	for(int i=0; i<5; i++){
                printf("%d ",arr[i]);
        }
        printf("\n");
	insertionSort(arr,5);
	for(int i=0; i<5; i++){
                printf("%d ",arr[i]);
        }
        printf("\n");

}
