#include <stdio.h>
main()
{
	char idata;
	printf("�A���t�@�x�b�g?");
	scanf("%c", &idata);
	if (idata >= 'a' && idata <= 'z')
	{
		printf("���̕����́u�������v�ł�\n");
	}
	else
	{
		if (idata >= 'A' && idata <= 'Z')
		{
			printf("���̕����́u�啶���v�ł�\n");
		}
		else
		{
			printf("ERROR\n");
		}
	}
}