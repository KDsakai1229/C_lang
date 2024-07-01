#include <stdio.h>
main()
{
	int yy;
	printf("¼—ï‚ğ“ü—Í:");
	scanf("%d", &yy);
	if (yy < 1989) {
		printf("º˜a¶‚Ü‚ê‚Å‚·\n");
	}
	else
	{
		if (yy < 2019) {
			printf("•½¬¶‚Ü‚ê‚Å‚·\n");
		}
		else
		{
			printf("—ß˜a¶‚Ü‚ê‚Å‚·\n");
		}
	}
}