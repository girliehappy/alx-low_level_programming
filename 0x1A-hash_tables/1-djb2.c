#include "hash_tables.h"

/**
 * hash_djb2 - A hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The result of the calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int t;

	hash = 5381;
	while ((t = *str++))
		hash = ((hash << 5) + hash) + t; /* hash * 33 + t */

	return (hash);
}
