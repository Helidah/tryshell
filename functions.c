/**
 * _strlen - find the length of a string
 * @s: pointer to the strin
 * Return: void
*/


int _strlen(const char *s)
{
int i = 0;
while (s[i])
	i++;

return (i);
}

/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: char string
 * @src: char string
 * Description: Works to copy the string pointed by 'scr' to buffer pointed by 'dest'
 * Return: dest
 */

char *_strcpy(char *dest, const char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
