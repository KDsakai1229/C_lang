#include <stdio.h>
main()
{
	char moji;
	printf("アルファベット小文字?");
	scanf("%c", &moji);
	moji++;
	for (moji -= 0x20; moji <= 'Z'; moji++)
	{
		printf("%c ", moji);
	}
}