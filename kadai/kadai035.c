#include <stdio.h>
main()
{
	int idata;
	printf("����?");
	scanf("%d", &idata);
	if (idata > 0)
	{
		printf("���͒l�́u�v���X�v�ł�\n");
	}
	else
	{
		if (idata < 0)
		{
			printf("���͒l�́u�}�C�i�X�v�ł�\n");
		}
		else
		{
			printf("���͒l�́u0�v�ł�\n");
		}
	}
}