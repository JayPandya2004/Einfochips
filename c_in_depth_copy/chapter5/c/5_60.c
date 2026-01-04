#include<stdio.h>

int main(){
	int marks[10][3];
	for(int i=0; i<10; i++){
		for(int j=0; j<3; j++){
			printf("Enter the marks of %d student in %d subject", i,j);
			scanf("%d", marks[i][j]);
		}
	}

}
