#include <stdio.h>
main()
{
	int ss, mm, hh;
	printf("秒数を入力:");
	scanf("%d", &ss);
	hh = ss / 3600;
	mm = ss / 60;
	if (ss <= 5000) {
		printf("%d時間%d分%d秒です\n", hh, mm % 60, ss % 60);
	}
	else
	{
		printf("エラー:秒数が大きすぎます、5000以下の秒数を入力してください。\n");
	}
}