#include <stdio.h>
main()
{
	int idata = 0, gokei = 0, i = 0;
	do
	{
		gokei += idata;
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &idata);
		i++;
	} while (idata != -999);
	i--;
	printf("‡Œv=%d\n•½‹Ï=%f\n", gokei, (float)gokei / i);
}