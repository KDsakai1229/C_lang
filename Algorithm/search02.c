#include <stdio.h>
main()
{
	int s, i, d[] = { 10,5,30,77,16,3,47,29,37,33 };

	printf("探索値を入力:");
	scanf("%d", &s);

	for (d[10] = s, i = 0; s != d[i]; i++);

	if (i == 10)
	{
		printf("見つかりませんでした\n");
	}
	else
	{
		printf("d[%d]で見つかりました\n", i);
	}
}