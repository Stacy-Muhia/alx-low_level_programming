#include "main.h"
int the_prime(int n, int x);
/**
  *is_prime_number - function that determines if a number is prime or not
  *@n: input
  *
  *Return: 1 if integer is prime number, else 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
	return (the_prime(n, n - 1));
	}
}

/**
 *the_prime - calculates if a number is prime recursively
 *@n: input
 *@x: the current guess
 *
 *Return: 1 if integer is prime, else 0
 */
int the_prime(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	else if (n % x == 0 && x > 0)
	{
		return (0);
	}
	else
	{
	return (the_prime(n, x - 1));
	}
}
