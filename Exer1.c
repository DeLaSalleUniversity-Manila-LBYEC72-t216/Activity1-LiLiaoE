#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int b, h;
	float area;
	printf("Input Triangle's Base:\n", b);
	scanf("%d", &b);
	printf("Input Triangle's Height:\n", h);
	scanf("%d", &h);
	area=(0.5)*b*h;
	printf("Area of the traingle is %f\n", area);
	system("PAUSE");
	return 0;
}
