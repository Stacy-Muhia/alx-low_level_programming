#include "main.h"
int helper_sqrt_recursion(int n, int i);
/**
  *_sqrt_recursion - function that returns the natural square root of a number
  *@n: input to find square root of
  *
  *Return: natural square root of n,
  *else -1 if n doesn't have a natural squareroot
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (helper_sqrt_recursion(n, 0));
}
/**
 *helper_sqrt_recursion - recurses to find the natural
 *square root of a number
 *@n: input to find the sqaure root of
 *@i: iterator
 *
 *Return: the result of square root of n,
 *else -1 if n doesn't have a natural squareroot
 */
int helper_sqrt_recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else  if (i * i >  n)
	{
		return (-1);
	}
	else
	{
	return (helper_sqrt_recursion(n, i + 1));
	}
}
