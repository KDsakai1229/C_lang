#include <stdio.h>
main()
{
	char aa;
	printf("文字を入力:");
	scanf("%c", &aa);
	if ((aa >= 'A' && aa <= 'Z') || (aa >= 'a' && aa <= 'z')) {
		printf("アルファベットです\n");
	}
	else{
		if (aa >= '0' && aa <= '9') {
			printf("数字です\n");
		}
		else {
			printf("その他の文字です\n");
		}
	}
}