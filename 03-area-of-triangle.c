#include <stdio.h>

void main() {
	float area, base, height;

	printf("Enter the base of triangle");
	scanf("%f",&base);

	printf("Enter the height of triangle");
	scanf("%f",&height);

	area = (base * height)/2;
	printf("Area of triangle is %f",area);

}
