#include <stdio.h>
main()
{
	double ia, ib;
	printf("2‚Â‚ÌŽÀ”’l?");
	scanf("%lf%lf", &ia, &ib);
	printf("‘å‚«‚¢‚Ù‚¤‚Í=");
	if (ia > ib)
	{
		printf("%lf\n", ia);
	}
	else
	{
		printf("%lf\n", ib);
	}
}