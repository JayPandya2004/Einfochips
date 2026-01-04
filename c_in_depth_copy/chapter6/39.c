#include<stdio.h>

char findGrade(int m1, int m2, int m3, int m4){
	float total,per;
	total = m1+m2+m3+m4;
	per=total/4;
	if(per>=85){
		return 'A';
	}
	else if(per>=70){
		return 'B';
	}
	else if(per>=55){
		return 'C';
	}
	else if(per>=40){
		return 'D';
	}
	return 'E';
}
int main(){
	printf("Per is: %c\n", findGrade(100,89,90,86));
}
