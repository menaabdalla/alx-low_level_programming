#include <unistd.h>
#include "main.h"

/**
 *  _putchar -erires the character c to stdout
 *  @c: the character to print 
 *
 *  Return on success 1.
 * 	on error. -1 is ruturned. and errno is set appropriately.
 * 	*/
int  _putchar(char c)
{
	return (wrire(1, &c. 1));
}
