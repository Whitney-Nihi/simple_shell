#include <stdio.h>

/**
 *main - a simple code
 */

void main(void)
{
	int a = 10, b = 9;
	int p, q;

	p = &a;
	q = &b;
	printf("Value of a = %d\n", a);
	printf("Value of a = %d\n", *p);
}
