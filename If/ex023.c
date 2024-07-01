#include <stdio.h>
main()
{
	int ss, mm, hh;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &ss);
	hh = ss / 3600;
	mm = ss / 60;
	if (ss <= 5000) {
		printf("%dŠÔ%d•ª%d•b‚Å‚·\n", hh, mm % 60, ss % 60);
	}
	else
	{
		printf("ƒGƒ‰[:•b”‚ª‘å‚«‚·‚¬‚Ü‚·A5000ˆÈ‰º‚Ì•b”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	}
}