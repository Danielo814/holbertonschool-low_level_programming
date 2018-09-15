#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int main(void)
{
	int *a;

	int n = 400;
	a = &n;
	*a = 200;
	printf("%lu\n", a);
	printf("%d\n", n);
	return (0);
}
