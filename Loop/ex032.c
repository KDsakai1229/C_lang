#include <stdio.h>
main()
{
	int ss, aa;
	printf("数を入れて:");
	scanf("%d", &ss);
	for (aa = 1; aa <= 5; aa++) {
		printf("%d ", ss * aa);
	}
}