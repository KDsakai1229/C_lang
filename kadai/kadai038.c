#include <stdio.h>
main()
{
	char idata;
	printf("1文字入力?");
	scanf("%c", &idata);
	if (idata >= 'a' && idata <= 'z')
	{
		idata -= 0x20;
	}
	else
	{
		if (idata >= 'A' && idata <= 'Z')
		{
			idata += 0x20;
		}
	}
	printf("変換結果は%c\n", idata);
}