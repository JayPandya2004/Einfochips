#include<stdio.h>

int main(){
	int i=1;
	for( ; ; )
	{
		if(i==5)
			break;
		printf("%d\n", i);
		i++;
	}
	printf("\n");
        printf("----------\n");
	
	int sum=0;
	int n;
	for( ; ; ){
		if(sum>100){
			break;
		}
		scanf("%d", &n);
		sum+=n;
	}
}
