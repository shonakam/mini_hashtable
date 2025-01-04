#include "mini_hashmap.h"

static bool is_prime(unsigned long n)
{
	if (n < 2) return (false);
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) return (false);
	return (true);
}

unsigned long	set_prime(unsigned int bit)
{
	unsigned long	candidate;
	
	if (bit > 64 || bit == 0) return (0);
	candidate = (unsigned long)(1UL << bit) * 0.618; // phi
	while (!is_prime(candidate)) candidate--;
	return (candidate);
}
