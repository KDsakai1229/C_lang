#include <stdio.h>
main()
{
	char aa;
	printf("文字を入力:");
	scanf("%c", &aa);
	if (aa >= 'A' && aa <= 'Z') {
		printf("変換すると%c\n", aa + 0x20);
	}
	else {
		if (aa >= 'a' && aa <= 'z') {
			printf("変換すると%c\n", aa - 0x20);
		}
		else {
			printf("エラー:これはアルファベットではありません\n");
		}
	}
}