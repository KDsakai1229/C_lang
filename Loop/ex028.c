#include <stdio.h>
main()
{
	int ff, aa;
	ff = 0;
	aa = 0;
	//printf("��������:");
	//scanf("%d", &aa);
	while (aa != -999) {
		ff += aa;
		printf("��������:");
		scanf("%d", &aa);
	}
	printf("���v=%d\n", ff);
}