#include <stdio.h>
main()
{
	int idata, p;
	printf("0‚©‚ç100‚Ü‚Å‚Ì®”?");
	scanf("%d", &idata);
	if (idata >= 90)
	{
		p = 5;
	}
	else
	{
		if (idata >= 80)
		{
			p = 4;
		}
		else
		{
			if (idata >= 50)
			{
				p = 3;
			}
			else
			{
				if (idata >= 30)
				{
					p = 2;
				}
				else
				{
					p = 1;
				}
			}
		}
	}
	printf("‚»‚Ì”’l‚Ì”»’èŒ‹‰Ê‚Íu%dv‚Å‚·\n", p);
}