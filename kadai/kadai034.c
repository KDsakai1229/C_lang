#include <stdio.h>
main()
{
	char idata;
	printf("アルファベット?");
	scanf("%c", &idata);
	if (idata >= 'a' && idata <= 'z')
	{
		printf("その文字は「小文字」です\n");
	}
	else
	{
		if (idata >= 'A' && idata <= 'Z')
		{
			printf("その文字は「大文字」です\n");
		}
		else
		{
			printf("ERROR\n");
		}
	}
}