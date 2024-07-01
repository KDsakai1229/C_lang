#include <stdio.h>
main()
{
	int aa, gokei;
	aa=1,gokei = 0;
	while (gokei <= 300) {
		printf("%d+", aa);
		gokei +=aa;
		aa++;
	}
	printf("\b=%d", gokei);
}