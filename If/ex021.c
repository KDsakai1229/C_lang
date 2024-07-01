#include <stdio.h>
main()
{
	int aa;
	printf("整数を入力:");
	scanf("%d", &aa);
	if (aa < 0) {
		printf("入力値はマイナスです\n");
	}
	else
	{
		printf("入力値はプラスです\n");
	}
}