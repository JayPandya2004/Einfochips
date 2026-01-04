#include<stdio.h>

void convert(int length, char unit){
	if(unit=='i'){
		printf("Length in cm is %lf cm\n", length*2.34);
	}
	else{
		printf("Length in inch is %lf inch\n", length*0.394);
	}
}

int main(){
	int length;
	char unit;
	printf("Enter the length");
	scanf("%d", &length);
	getchar();
	printf("Enter the unit");
	scanf("%c", &unit);
	convert(length,unit);
}
