#include <stdio.h>
main()
{
	double ia, ib;
	printf("2つの実数値?");
	scanf("%lf%lf", &ia, &ib);
	printf("大きいほうは=");
	if (ia > ib)
	{
		printf("%lf\n", ia);
	}
	else
	{
		printf("%lf\n", ib);
	}
}