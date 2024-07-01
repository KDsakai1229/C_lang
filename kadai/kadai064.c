#include <stdio.h>
main()
{
	int i = 20;
	while (i > 0)
	{
		printf("%3d", i);
		i--;
		if (i % 10 == 0)
		{
			printf("\n");
		}
	}
}