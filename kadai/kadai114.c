#include <stdio.h>
main()
{
	char moji[80];
	int cnt;
	printf("•¶š—ñ‚Í? ");
	scanf("%s", &moji[0]);
	printf("•¶š—ñ:%s", &moji[0]);
	cnt = 0;
	while (moji[cnt] != '\0')
	{
		cnt++;
	}
	printf("\t•¶š”=%d•¶š\n", cnt);
}