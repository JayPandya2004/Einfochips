#include<stdio.h>

int main(){
	int x=2, y=0;
	switch(x){
		case 1:
			y=x+1;
			break;
		case 2:
			y=0;
			x=0;
			break;
		case 3:
			y++;
			break;
		case 4:
			y++;
			break;
		case 5:
			y++;
			break;
		case 6:
			y+=4;
			break;
		default:
			y--;
	}
	printf("%d\n", y);
}
