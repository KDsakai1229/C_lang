#include <stdio.h>
main()
{
	double ia, ib;
	printf("2�̎����l?");
	scanf("%lf%lf", &ia, &ib);
	printf("�傫���ق���=");
	if (ia > ib)
	{
		printf("%lf\n", ia);
	}
	else
	{
		printf("%lf\n", ib);
	}
}