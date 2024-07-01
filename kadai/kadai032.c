#include <stdio.h>
main()
{
	int idata;
	printf("整数?");
	scanf("%d", &idata);
	if (idata % 2 == 0)
	{
		printf("その数は「偶数」です\n");
	}
	else
	{
		printf("その数は「奇数」です\n");
	}
}