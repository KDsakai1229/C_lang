#include <stdio.h>
main()
{
	int su, gokei = 0, i = 0;
	printf("����(-999�ŏI��)?");
	scanf("%d", &su);
	while (su != -999)
	{
		gokei += su;
		i++;
		printf("����(-999�ŏI��)?");
		scanf("%d", &su);
	}
	printf("���v=%d\n", gokei);
	printf("����=%.2f\n", (float)gokei / i);
}