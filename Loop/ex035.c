#include <stdio.h>
main()
{
	int aa, bb=0;
	while (1) {
		printf("数を入れて:");
		scanf("%d", &aa);
		if (aa == -999)break;
		bb += aa;
	}
	printf("合計=%d\n", bb);
}