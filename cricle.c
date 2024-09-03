#include<stdio.h>
#define PI 3.14139
int main()
{
	float radius,area;
	printf("enter the radius of circle");
	scanf("%f",&radius);
	area=PI*radius*radius;
	printf("the area of circle is %f",area);
	return 0;
}

