#include<stdio.h>

int main(){
	int octal[10];
	char hexadecimal[10];
	int decimal;
	printf("Enter the decimal:");
	scanf("%d", &decimal);
	int decimal_copy = decimal;
	//This is the code for Decimal to Octal
	int i = 0;
	while (decimal > 0) {
        	int rem = decimal % 8;
        	octal[i] = rem;
        	decimal = decimal / 8;
     	        i++;
    	}

	printf("Octal number is: ");
    	for (int j = i - 1; j >= 0; j--) {
        	printf("%d", octal[j]);
 	}

   	printf("\n");

	//This is the code for Decimal to Hexadecimal
	int j = 0;
	decimal = decimal_copy;
	while(decimal > 0){
		int rem_h = decimal % 16;
		if(rem_h < 10){
			hexadecimal[j] = rem_h + '0';
		}
		else{
			hexadecimal[j] = rem_h - 10 + 'A';
		}
		j++;
		decimal = decimal / 16;
	}

	printf("Hexadecimal Number is:");
	for(int k = j -1 ; k>=0 ; k--){
		printf("%c",hexadecimal[k]);
	}
	printf("\n");
	return 0;
}
/*Output:Enter the decimal:140
	 Octal number is: 214
	 Hexadecimal Number is:8C*/
