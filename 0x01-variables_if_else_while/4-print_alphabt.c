#include <stdio.h>
/**
 * main - prints alphabet
 *
 * Description: uses if statement to check if letters are q or e
 * Return: 0
 */
int main(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
