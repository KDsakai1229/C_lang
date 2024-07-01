#include <stdio.h>
main()
{
	int i = 0;
	do
	{
		printf("%3d", i + 1);
		i++;
		if (i % 10 == 0)
		{
			printf("\n");
		}
	} while (i < 20);
}