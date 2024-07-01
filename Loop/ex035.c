#include <stdio.h>
main()
{
	int aa, bb=0;
	while (1) {
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &aa);
		if (aa == -999)break;
		bb += aa;
	}
	printf("‡Œv=%d\n", bb);
}