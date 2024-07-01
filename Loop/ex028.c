#include <stdio.h>
main()
{
	int ff, aa;
	ff = 0;
	aa = 0;
	//printf("”‚ğ“ü‚ê‚Ä:");
	//scanf("%d", &aa);
	while (aa != -999) {
		ff += aa;
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &aa);
	}
	printf("‡Œv=%d\n", ff);
}