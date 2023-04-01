/**
 *strl - length
 * Description: count the number of character in a srting
 * @s: pointer to the string
 * Return: length of the string
 */
int strl(char *s)
{
	int n = 0;

	for (; *s != '\0'; s++)
		n++;
	return (n);
}

