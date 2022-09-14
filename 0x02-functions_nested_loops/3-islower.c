#include "main.h"
/**
 * main - lower
 * _isalpha - function to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the function
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
