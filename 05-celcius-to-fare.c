#include <stdio.h>

void main() {
	int c_temp,f_temp;

	printf("Enter the tempreture in celcius ");
	scanf("%d",&c_temp);
	
	f_temp = (c_temp *9  / 5) + 32 ;

	printf("The tempreture in fahrenheit is %d",f_temp);

}


