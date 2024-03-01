#include "main.h"
/**
 * _strncat - concatenates string with n bytes from another string
 * @dest: destination string
 * @src: source string
 * @n: bytes to be copied
 *
 * Return: destination string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y;

	while (dest[x] != '\0')
		x++;
	for (y = 0; y < n && src[y] != '\0'; y++, x++)
		dest[x] = src[y];
	dest[x] = '\0';
	return (dest);
}
