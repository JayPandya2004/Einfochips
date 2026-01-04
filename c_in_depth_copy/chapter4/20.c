#include<stdio.h>

int main(){
	float temp;
	printf("Enter the Temperature in Celsius:");
	scanf("%f", &temp);
	float temp_f =(9.0/5.0)*temp + 32;
	printf("Temperature in Fahrenheit is:%.2f\n", temp_f);
	return 0;
}
/*Output:Enter the Temperature in Celsius:37
	 Temperature in Fahrenheit is:98.60*/

