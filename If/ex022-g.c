#include <stdio.h>
main()
{
	int yy;
	printf("西暦を入力:");
	scanf("%d", &yy);
	if (yy < 1989) {
		printf("昭和生まれです\n");
	}
	else
	{
		if (yy < 2019) {
			printf("平成生まれです\n");
		}
		else
		{
			printf("令和生まれです\n");
		}
	}
}