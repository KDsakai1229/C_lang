#include <stdio.h>
main()
{
	int su, cnt = 0, gokei = 0;
	while (1)
	{
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &su);
		if (su == -999)break;
		gokei += su;
		cnt++;
	}
	printf("‡Œv=%d\n•½‹Ï=%.3f\n", gokei, (float)gokei / cnt);
}