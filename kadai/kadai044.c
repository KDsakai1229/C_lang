#include <stdio.h>
main()
{
	int idata;
	printf("����(-999�ŏI��)?");
	scanf("%d", &idata);
	while (idata != -999)
	{
		printf("8�i��=%o\t16�i��=%x\n", idata, idata);
		printf("����(-999�ŏI��)?");
		scanf("%d", &idata);
	}
}