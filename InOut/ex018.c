#include <stdio.h>
Main()
{
	int a, b, c, dd;
	printf("������3����:");
	scanf("%d%d%d", &a, &b, &c);
	dd = a + b + c;
	printf("���v=%d  ", a + b + c);
	printf("����=%.2f\n", dd / 3.0);
}