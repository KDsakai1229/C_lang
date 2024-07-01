#include <stdio.h>
main()
{
	int ia, ib;
	while (1)
	{
		printf("®”1(-999‚ÅI—¹)?");
		scanf("%d", &ia);
		printf("®”2(-999‚ÅI—¹)?");
		scanf("%d", &ib);
		if (ia == -999 || ib == -999)break;
		if (ib == 0)continue;
		printf("%d/%d=%d‚ ‚Ü‚è%d\n", ia, ib, ia / ib, ia % ib);
	}
}