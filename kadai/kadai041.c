#include <stdio.h>
main()
{
	int su, gokei = 0, i = 0;
	printf("®”(-999‚ÅI—¹)?");
	scanf("%d", &su);
	while (su != -999)
	{
		gokei += su;
		i++;
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &su);
	}
	printf("‡Œv=%d\n", gokei);
	printf("•½‹Ï=%.2f\n", (float)gokei / i);
}