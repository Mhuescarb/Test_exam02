#include <stdio.h>

size_t strelen(const char* len)
{
	size_t	ch;
	ch = 0;

	while (len [ch])
		ch++;
	return (ch);
}
int main (void)
{
printf ("%zu\n", strelen("maricarmen, maricarmen"));
return (0);
}
