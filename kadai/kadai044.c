#include <stdio.h>
main()
{
	int idata;
	printf("整数(-999で終了)?");
	scanf("%d", &idata);
	while (idata != -999)
	{
		printf("8進数=%o\t16進数=%x\n", idata, idata);
		printf("整数(-999で終了)?");
		scanf("%d", &idata);
	}
}