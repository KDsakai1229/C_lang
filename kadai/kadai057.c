#include <stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g������?");
	scanf("%c", &moji);
	moji++;
	for (moji -= 0x20; moji <= 'Z'; moji++)
	{
		printf("%c ", moji);
	}
}