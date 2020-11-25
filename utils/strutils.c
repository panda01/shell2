int _strlen(char *str);

/**
 * _strlen - Counts the num of characters no including null pointer
 * @str: the string to count
 * Return - The num of characters
 */
int _strlen(char *str)
{
	int count = 0;
	while(str[count] != '\0')
	{
		count++;
	}
	return (count);
}
