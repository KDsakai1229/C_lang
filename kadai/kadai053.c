#include <stdio.h>
main()
{
	int idata, i;
	printf("®”?");
	scanf("%d", &idata);
	for (i = 0; i <= 10; i++)
	{
		printf("%d ", idata);
		idata++;
	}
}