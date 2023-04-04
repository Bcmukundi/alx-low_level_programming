#include "main.h"
/**
 * print - chessboard - entry point
 * @a:array
 * Return:Always 0 (success)
 */
void print_chessboard(char(*a)[8])
{
	int j;
	int i;

	for (i = 0; i < 8;j++)
	{
		for (j = 0; < 8; j++)
			_putchar(a[j][i]);
		_putchar("\n");
	}
}
		

