#include<stdio.h>
#include<stdlib.h>
int main ()
{	
	int x;
	float age;
	printf("Enter Birth Year:\n");
	scanf("%d", &x);
	age=2016-x;
	printf("Approximately %.2f years old\n", age);
	system("PAUSE");
	return 0;
}
