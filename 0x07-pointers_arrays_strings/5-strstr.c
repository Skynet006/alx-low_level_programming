#include "main.h"
#include <stdio.h>

/**
 * *_strstr - description
 * @haystack: strings to scan
 * @needle: string to compare haystack to
 * Return: pointer to the begining of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
			{
				break;
			}
		}
		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
