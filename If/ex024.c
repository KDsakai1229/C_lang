#include <stdio.h>
main()
{
	char aa;
	printf("文字を入力:");
	scanf("%c", &aa);
	if (aa >= 'A' && aa <= 'Z') {
		printf("大文字です\n");
	}
	else{
		printf("その他の文字です\n");
	}
}