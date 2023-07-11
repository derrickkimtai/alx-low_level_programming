#include "main.h"
int actual_prime(int n, int i);
/**
 *is_prime_numbers - prime number or not
 *@n:number
 *Return: 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 *actual_prime - calculate prime numbers
 *@n:number
 *@r: mover
 *Return: 1
 */
int actual_prime(int n, int r)
{
	if (r == 1)
		return (1);
	if (n % r == 0 && r > 0)
		return (0);
	return (actual_prime(n, r - 1));
}
