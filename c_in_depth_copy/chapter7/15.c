#include<stdio.h>

int count(int a,int b){
	if(a>b){
		return 0;
	}

	int countn=0;
	for(int i=1; i<=a; i++){
		if(a%i==0){
			countn++;
		}
	}
	if(countn==2){
		printf("%d ",a);
	}
	return count(a+1,b);
}

int main(){
	count(1,11);
}

