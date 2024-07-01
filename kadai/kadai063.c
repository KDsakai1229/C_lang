#include <stdio.h>
main()
{
	int i = 0;
	while (i < 20)
	{
		printf("%3d", i + 1);
		i++;
		if (i % 10 == 0)
		{
			printf("\n");
		}
	}
}