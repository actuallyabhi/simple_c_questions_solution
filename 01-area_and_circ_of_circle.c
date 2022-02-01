#include <stdio.h>
#define PI 3.14
void main() {
	int radius;
	float area, circumference;

	printf("\nEnter the radius of circle ");
	scanf("%d",&radius);

	area = 3.14* radius * radius;
	printf("\nArea of circle is %f",area);
	

	circumference = 2 * 3.14 * radius;
	printf("\nCircumference of circle is %f",circumference);
}
