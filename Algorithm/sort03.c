#include <stdio.h>
main()
{
	int data[] = { 30,7,25,16,10 };
	int i, j, w;

	for (i = 1; i < 5; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (data[j + 1] >= data[j])break;

			w = data[j + 1];
			data[j + 1] = data[j];
			data[j] = w;
		}
	}

	for (i = 0; i < 5; i++)
	{
		printf("data[%d]=%d\n", i, data[i]);
	}
}