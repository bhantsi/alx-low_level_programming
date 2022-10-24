#include <stdio.h>

void
print_rev(char *s)
{
	int len = _strlen(s);
	int n;

	for (n = len - 1; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}

int
_strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		++n;

	return (n);

}