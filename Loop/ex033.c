#include <stdio.h>
main()
{
	int i, num, sum;
	printf("����?:");
	scanf("%d", &num);
	for (sum = 0, i = 1; num != -999; i++); {
		sum += num;
		printf("����?:");
		scanf("%d", &num);
	}
	printf("���v=%d  ����=%f.2\n", sum, (float)sum / i);
}