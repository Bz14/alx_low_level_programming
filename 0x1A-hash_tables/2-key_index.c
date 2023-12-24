#include "hash_tables.h"
/**
 *key_index - Find the index of a key in hashmap
 *@key: a key
 *@size: size of the hash map
 *Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
