#include <stdio.h>
main()
{
	int idata;
	printf("文字コード(-1で入力終了)?");
	scanf("%d", &idata);
	while (idata != -1)
	{
		printf("%c\n", (char)idata);
		printf("文字コード(-1で入力終了)?");
		scanf("%d", &idata);
	}
}