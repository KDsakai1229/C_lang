#include <stdio.h>
main()
{
	float gokei = 0, box[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("実数を入力:");
		scanf("%f", &box[i]);
		gokei += box[i];
	}
	printf("合計は%.2fです\n", gokei);
	printf("平均は%.2fです\n", gokei / 3.0);
}