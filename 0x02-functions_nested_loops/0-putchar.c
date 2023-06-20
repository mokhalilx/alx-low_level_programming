#include "main.h"

int main(void)
{
	char hacker[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(hacker[c]);
	}
	_putchar('\n');
	return (0);
}
