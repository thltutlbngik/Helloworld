#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(viod)
{
	char a[8] ={31,32,33,61,62,63,34,35};
	char *s=malloc(9);
	memset (s,0,9);
	for (int i=0;i<8;i++);
	{
		*s=a[i];
		s++;
	}
	printf("%s\n",string);
	return 0;
}