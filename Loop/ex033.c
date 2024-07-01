#include <stdio.h>
main()
{
	int i, num, sum;
	printf("”‚Í?:");
	scanf("%d", &num);
	for (sum = 0, i = 1; num != -999; i++); {
		sum += num;
		printf("”‚Í?:");
		scanf("%d", &num);
	}
	printf("‡Œv=%d  •½‹Ï=%f.2\n", sum, (float)sum / i);
}