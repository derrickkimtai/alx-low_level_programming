#include "main.h"
/**
 *is_palindrome - checks if the word are the same it compares
 *@s: number
 *Return: 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 *_strlen_recursion -  checks the lenght
 *@s: pointer to a string
 *Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 *check_pal - checks for the same letter
 *@S: number
 *@r: intger
 *@len: lenght
 *Return: 0
 */
int check_pal(char *s, int r, int len)
{
	if (*(s + r) != *(s + len - 1))
		return (0);
	if (r >= len)
		return (1);
			return (check_pal(s, r + 1, len - 1));
}
