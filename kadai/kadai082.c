#include <stdio.h>
main()
{
	int su, cnt = 0, gokei = 0;
	while (1)
	{
		printf("����(-999�ŏI��)?");
		scanf("%d", &su);
		if (su == -999)break;
		if (su < 0)continue;
		gokei += su;
		cnt++;
	}
	printf("���v=%d\n����=%.3f\n", gokei, (float)gokei / cnt);
}