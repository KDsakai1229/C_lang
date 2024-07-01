#include <stdio.h>
main()
{
	int ia, ib;
	printf("®”1?");
	scanf("%d", &ia);
	printf("®”2?");
	scanf("%d", &ib);
	if (ia > ib)
	{
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢\n", ia, ib, ia - ib);
	}
	else
	{
		if (ia < ib)
		{
			printf("%d‚Ì•û‚ª%d‚æ‚è%d¬‚³‚¢\n", ia, ib, ib - ia);
		}
		else
		{
			printf("%d‚Æ%d‚Í“™‚µ‚¢\n", ia, ib);
		}
	}
}