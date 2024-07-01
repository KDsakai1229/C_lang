#include <stdio.h>
main()
{
	int data = 32, i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%x %c ", data, data);
			data++;
			if (data > 126)break;
		}
		printf("\n");
	}
}