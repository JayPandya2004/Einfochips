#include<stdio.h>

int main(){
	int arr[10];
	int max=0;
	for(int i=0; i<10; i++){
		printf("Enter the number:");
		scanf("%d", &arr[i]);

		if(arr[i]>max){
			max=arr[i];
		}
	}

	printf("Maximum number is:%d\n", max);
}
