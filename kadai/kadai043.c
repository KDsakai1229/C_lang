#include <stdio.h>
main()
{
	int idata;
	printf("�����R�[�h(-1�œ��͏I��)?");
	scanf("%d", &idata);
	while (idata != -1)
	{
		printf("%c\n", (char)idata);
		printf("�����R�[�h(-1�œ��͏I��)?");
		scanf("%d", &idata);
	}
}