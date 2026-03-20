#include "main.h"
/**
 * 
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

