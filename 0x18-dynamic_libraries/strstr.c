#include "main.h"
/**
 *_strstr - searchs the occurence of the first substring
 *@hatystack: haystack of the program
 *@needle:endpoint
 *Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	 while (*haystack) 
	 {
        char *h = haystack;
        char *n = needle;

        while (*haystack && *n && (*haystack == *n)) 
	{
            haystack++;
            n++;
        }

        if (!*n)
	{

            return h;
        }

        haystack = h + 1;
    }

    return NULL;
}
