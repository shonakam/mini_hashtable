#include "mini_hashmap.h"

// Knuth Multiplicative Hash
unsigned int knuth_hash(unsigned long p, int k, int capacity)
{
	return (k * p) % capacity;
}