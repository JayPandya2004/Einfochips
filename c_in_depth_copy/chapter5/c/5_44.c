#include<stdio.h>

int main(){
	for(int i=1; i<6; i++){
		if(i==3)
			continue;
		printf("%d ", i);
	}
	printf("\n");
	printf("----------\n");

	int x=0, sum=0;
	while(x<10){
		x++;
		if(x%2==0)
			continue;
		sum+=x;
	}
	printf("\n");
}
