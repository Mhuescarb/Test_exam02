#include <stdio.h>

size_t estrelen (const char* strelen)
{
	size_t stre;
	stre= 0;

	while (strelen[stre])
		stre++;
	return (stre);

}
int	main (void)
{

printf ("%zu\n", estrelen ("maricarmen"));

return (0);
}
