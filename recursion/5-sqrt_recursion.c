#include "main.h"
/**
 * helper - Searches for the natural square root of a number.
 * @n: The number to find the square root of.
 * @i: The iterator to test.
 *
 * Return: The square root if found, -1 otherwise.
 */
int helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (helper(n, i + 1));
}
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}

