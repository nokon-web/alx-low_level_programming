#include "main.h"
#include<unistd.h>
/**
 * this is the putchar
 * retutn :putchar
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

