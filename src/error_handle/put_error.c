#include "../importer.h"

void	put_error(void)
{	
	write (2, "Error\n", 6);
	exit(1);
}
