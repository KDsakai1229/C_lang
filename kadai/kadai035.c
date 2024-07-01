#include <stdio.h>
main()
{
	int idata;
	printf("整数?");
	scanf("%d", &idata);
	if (idata > 0)
	{
		printf("入力値は「プラス」です\n");
	}
	else
	{
		if (idata < 0)
		{
			printf("入力値は「マイナス」です\n");
		}
		else
		{
			printf("入力値は「0」です\n");
		}
	}
}