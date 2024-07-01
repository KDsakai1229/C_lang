#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int data[20];
	int i, w, target;

	for (i = 0; i < 20; i++) 
	{
		data[i] = i + 1;
	}

	srand(time(0));
	rand();
	for (i = 19; i > 0; i--) {
		target = rand() % i;
		w = data[i];
		data[i] = data[target];
		data[target] = w;
	}

	for (i = 0; i < 20; i++) {
		printf("%2d ", data[i]);
	}
	printf("\n");
}