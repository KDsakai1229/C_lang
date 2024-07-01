#include <stdio.h>
main()
{
	int aa, bb, cc;
	char ss;
	printf("処理を入力:");
	scanf("%c", &ss);
	printf("整数を入力:");
	scanf("%d %d %d", &aa, &bb, &cc);
	switch (ss) {
	case'D':
	case'd':
		if (aa > bb && aa > cc) {
			printf("最大値は%dです\n", aa);
		}
		else {
			if (bb > cc) {
				printf("最大値は%dです\n", bb);
			}
			else {
				printf("最大値は%dです\n", cc);
			}
		}
		break;
	case'S':
	case's':
		if (aa < bb && aa < cc) {
			printf("最小値は%dです\n", aa);
		}
		else {
			if (bb < cc) {
				printf("最小値は%dです\n", bb);
			}
			else {
				printf("最小値は%dです\n", cc);
			}
		}
		break;
	case'G':
	case'g':
		printf("合計は%dです\n", aa + bb + cc);
		break;
	case'H':
	case'h':
		printf("平均は%.2fです\n", (aa + bb + cc) / 3.0);
		break;
	default:
		printf("?????\n");
	}
}