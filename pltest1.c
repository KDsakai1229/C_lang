#include <stdio.h>
int main(void)
{
	unsigned short a = 0x2ae6;
	unsigned short b = 0xc13b;

	printf("%04hx\n", a & b);
	printf("%04hx\n", a ^ b);
	printf("%04hx\n", a << 3);
	printf("%04hx\n", ~a | (b << 2));
	printf("%04hx\n", (a & 0xff) | (b << 8));
}