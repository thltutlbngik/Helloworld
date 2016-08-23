#include <stdio.h>
int main(void)
{
	int age;
	double value;
	printf("How long have you live in seconds?\n");
	printf("Let's check it out.\n");
	printf("Please enter your age\n");
	scanf("%d",&age);
	value=31560000*age;
	printf("You have live $%.2f second.\n",value);
	return 0;
}