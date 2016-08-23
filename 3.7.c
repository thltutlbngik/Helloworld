#include <stdio.h>
int main(void)
{
	int hight;
	float value;
	printf("What is your hight in inchs?\n");
	printf("Please enter your hight?(cm)\n");
	scanf("%d",&hight);
	value=2.54*hight;
	printf("You are $%.2f inchs tall.\n in inchs",value);
	return 0;
}