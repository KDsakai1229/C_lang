#include <stdio.h>
main()
{
	int idata = 0, gokei = 0, i = 0;
	do
	{
		gokei += idata;
		printf("����(-999�ŏI��)?");
		scanf("%d", &idata);
		i++;
	} while (idata != -999);
	i--;
	printf("���v=%d\n����=%f\n", gokei, (float)gokei / i);
}