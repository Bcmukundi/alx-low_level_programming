#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @C: The character to be checked
 * Return: 1 for alphabetic character or @ for anything else
 */

int _isalpha(int C)

{
	if ((C >= 65 && C <= 90) || (C >= 97 && C <= 122))
	{
	return (1);
	}
	return (0);
}

