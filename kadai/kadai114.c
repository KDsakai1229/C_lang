#include <stdio.h>
main()
{
	char moji[80];
	int cnt;
	printf("�������? ");
	scanf("%s", &moji[0]);
	printf("������:%s", &moji[0]);
	cnt = 0;
	while (moji[cnt] != '\0')
	{
		cnt++;
	}
	printf("\t������=%d����\n", cnt);
}