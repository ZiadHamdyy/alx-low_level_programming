#include "main.h"
/**
 * is_prime - a supfunction to find the prime numbers.
 * @n:is a prime number.
 * @i:is a number.
 * Return: 0 if its less then 2.
 * and 1 if its prime.
 */
int is_prime(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime(n, i + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0.
 * @n:a number.
 * Return:returns 1 if the input integer is a prime number
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
