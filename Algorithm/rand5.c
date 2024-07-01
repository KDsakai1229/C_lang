#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int su,i;
	srand(time(0));
	rand();
	for (i = 0; i < 100; i++)
	{
		su = rand() % 300 + 1;
		printf("%03d ", su);
	}
}