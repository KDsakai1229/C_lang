#include <stdio.h>
main()
{
	int aa, bb=0;
	while (1) {
		printf("��������:");
		scanf("%d", &aa);
		if (aa == -999)break;
		bb += aa;
	}
	printf("���v=%d\n", bb);
}