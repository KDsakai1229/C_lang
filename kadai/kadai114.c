#include <stdio.h>
main()
{
	char moji[80];
	int cnt;
	printf("文字列は? ");
	scanf("%s", &moji[0]);
	printf("文字列:%s", &moji[0]);
	cnt = 0;
	while (moji[cnt] != '\0')
	{
		cnt++;
	}
	printf("\t文字数=%d文字\n", cnt);
}