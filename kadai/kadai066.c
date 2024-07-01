#include <stdio.h>
main()
{
	int su = 0, gokei = 0;
	do
	{
		su++;
		printf("%d+", su);
		gokei += su;
	} while (gokei <= 300);
	printf("\b=%d\n", gokei);
}