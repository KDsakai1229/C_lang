#include <stdio.h>
main()
{
	char idata;
	printf("1��������?");
	scanf("%c", &idata);
	if (idata >= 'a' && idata <= 'z')
	{
		idata -= 0x20;
	}
	else
	{
		if (idata >= 'A' && idata <= 'Z')
		{
			idata += 0x20;
		}
	}
	printf("�ϊ����ʂ�%c\n", idata);
}