#include <stdio.h>
main()
{
	int ss, aa;
	printf("��������:");
	scanf("%d", &ss);
	for (aa = 1; aa <= 5; aa++) {
		printf("%d ", ss * aa);
	}
}