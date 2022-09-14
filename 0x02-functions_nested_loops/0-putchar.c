#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char ch[8] = "_putchar";
	int n = 0;
	char c;

	while (n <= 7)
	{
		c = ch[n];
		_putchar(c);
		n++;
	}
	_putchar('\n');
	return (0);
}
