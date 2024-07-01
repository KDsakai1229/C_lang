#include <stdio.h>
main()
{
	int i = 20;
	do
	{
		printf("%3d", i);
		i--;
		if (i % 10 == 0)
		{
			printf("\n");
		}
	} while (i > 0);
}