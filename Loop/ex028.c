#include <stdio.h>
main()
{
	int ff, aa;
	ff = 0;
	aa = 0;
	//printf("数を入れて:");
	//scanf("%d", &aa);
	while (aa != -999) {
		ff += aa;
		printf("数を入れて:");
		scanf("%d", &aa);
	}
	printf("合計=%d\n", ff);
}