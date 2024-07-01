#include <stdio.h>
main()
{
	int su = 1, i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 20; j++)
		{
			printf("%3d", su);
			su++;
		}
		printf("\n");
	}
}