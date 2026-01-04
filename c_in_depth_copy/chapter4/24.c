#include<stdio.h>

int main(){
	int num1, num2;
	printf("Enter the first number:");
	scanf("%d", &num1);
	printf("Enter the second number:");
	scanf("%d", &num2);
	num1 > num2 ? printf("Diiference is %d\n", num1 - num2) : printf("Sum is %d\n", num1 + num2);
	return 0;
}
/*Output:Enter the first number:14
	 Enter the second number:12
	 Diiference is 2 */
