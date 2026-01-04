#include<stdio.h>

int main(){
	int marks[5];
	float sum = 0;
	for(int i = 0 ; i<=4 ; i++){
		printf("Enter the marks of %d subject out of 100:", i+1);
		scanf("%d", &marks[i]);
		sum = sum + marks[i];
	}

	float percentage = (sum/500.0)*100;
	printf("Percentage is %.2f\n", percentage);
}
/*Output:Enter the marks of 1 subject out of 100:50   
	 Enter the marks of 2 subject out of 100:60
	 Enter the marks of 3 subject out of 100:70
	 Enter the marks of 4 subject out of 100:80
	 Enter the marks of 5 subject out of 100:90
	 Percentage is 70.00*/
