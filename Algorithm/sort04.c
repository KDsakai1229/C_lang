#include <stdio.h>

#define DCNT 8

main()
{
	int data[DCNT] = { 70,60,80,50,40,20,30,10 };
	int i, j, w, gap;

	gap = DCNT / 2;

	while (gap > 0)
	{
		for (i = gap; i < DCNT; i++)
		{
			for (j = i - gap; j >= 0; j -= gap)
			{
				int k;
				for (k = 0; k < DCNT; k++)
				{
					printf("%d ", data[k]);
				}
				printf("\n");

				if (data[j + gap] < data[j])
				{
					w = data[j];
					data[j] = data[j + gap];
					data[j + gap] = w;
				}
				else 
				{
					break;
				}
			}
		}

		gap = gap / 2;
		printf("-------------------------\n");

	}

	for (i = 0; i < DCNT; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");
}