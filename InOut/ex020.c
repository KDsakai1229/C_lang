#include <stdio.h>
main()
{
	char aa;
	printf("一文字入力:");
	scanf("%c", &aa);
	printf("大文字に変換して=%c\n", aa-0x20);
}