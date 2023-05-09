#include "main.h"
/**
 * set_string - A function that sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: a character pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
