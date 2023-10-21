#include"main.h"
/**
 * _strlen-return the length of the cahrecter
 * @str : a pointer to charecter.
 * return : the length of the str.
 */
int _strlen(char *str)
{
	for (int i = 0; str[i] != "\0"; i++)
		;
	return (i);
}

/**
 * _strlenc-return length of the const char.
 * @str : a pointer to const char.
 * return : return the lenght of str.
 */
int _strlenc(const char *str)
{
	for (int i = 0; i != "\0"; i++)
		;
	return (i);
}

