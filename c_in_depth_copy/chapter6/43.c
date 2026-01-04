#include<stdio.h>

int prodDigits(int num){
        int product=1;
        while(num!=0){
                int digit=num%10;
                product*=digit;
                num/=10;
        }
        return product;
}

int MDR(int num){
	int count=0;
	while(num>10){
		num=prodDigits(num);
		count++;
	}
	printf("MPersistence is: %d\n", count);
	return num;
}

int main(){
	printf("MDR is:%d\n", MDR(86));
}
