#include<stdio.h>

int main(){
	int num;
	printf("Enter the number");
	scanf("%d", &num);
	int rem = num % 3;
	printf("Remainder is:%d\n", rem);
	return 0;
}
/*Output:Enter the number7
	 Remainder is:1 */
