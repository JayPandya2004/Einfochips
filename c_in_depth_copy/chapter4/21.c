#include<stdio.h>
#define PI 3.14
int main(){
	float radius;
	printf("Enter the radius of the circle:");
	scanf("%f", &radius);
	float area =  PI * radius *  radius;
	float perimeter = 2 * PI * radius;
	printf("Area of Circle is:%.2f\n", area);
	printf("Perimeter of Circle is %.2f\n", perimeter);
	return 0;
}
/*Output:Enter the radius of the circle:10
	 Area of Circle is:314.00
	 Perimeter of Circle is 62.80 */

