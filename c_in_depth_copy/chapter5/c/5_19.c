#include<stdio.h>

int main(){
	int x, y, z=0;
	x=30, y=5;
	switch(x){
		case 10:
			z++;
			break;
		case 20:
			z--;
			break;
		case 30:
			if(y==2){
				z+=3;
			}
			else if(y==5){
				z+=10;
			}
			else{
				z-=2;
			}
			break;
		default:
			z=0;
	}
	printf("%d", z);
}
