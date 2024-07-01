#include <stdio.h>
main()
{
	int ss, mm, hh;
	printf("秒数を入力:");
	scanf("%d", &ss);
	
	if (ss <= 5000) {
		if (ss>=0){
			hh = ss / 3600;
			ss = ss % 3600;
			mm = ss / 60;
			ss = ss % 60;
			printf("%d時間%d分%d秒です\n", hh, mm, ss);
		}
		else
		{
			printf("エラー:マイナスには非対応です\n");
		}
	}
	else
	{
		printf("エラー:秒数が大きすぎます、5000以下の秒数を入力してください。\n");
	}
}