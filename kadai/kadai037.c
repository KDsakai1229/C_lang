#include <stdio.h>
main()
{
	int idata, p;
	printf("0から100までの整数?");
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
	printf("その数値の判定結果は「%d」です\n", p);
}