#include <stdio.h>
main()
{
	int yy;
	printf("��������:");
	scanf("%d", &yy);
	if (yy < 1989) {
		printf("���a���܂�ł�\n");
	}
	else
	{
		if (yy < 2019) {
			printf("�������܂�ł�\n");
		}
		else
		{
			printf("�ߘa���܂�ł�\n");
		}
	}
}