#include<stdio.h>

int main(){
	int x,y,z;
	x = 8++;
	y = ++x++;
	z = (x+y)--;
	printf("x=%d, y=%d, z=%d" , x,y,z);
	return 0;
}
/*Output:6.c: In function ‘main’:
	 6.c:5:14: error: lvalue required as increment operand
    	 5 |         x = 8++;
      	   |              ^~
	 6.c:6:13: error: lvalue required as increment operand
    	 6 |         y = ++x++;
      	   |             ^~
	 6.c:7:18: error: lvalue required as decrement operand
    	 7 |         z = (x+y)--;
      	   |                  ^~
*/
