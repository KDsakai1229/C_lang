#include <stdio.h>
main()
{
	int i, num, sum;
	printf("数は?:");
	scanf("%d", &num);
	for (sum = 0, i = 1; num != -999; i++); {
		sum += num;
		printf("数は?:");
		scanf("%d", &num);
	}
	printf("合計=%d  平均=%f.2\n", sum, (float)sum / i);
}