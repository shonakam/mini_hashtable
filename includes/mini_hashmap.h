
#ifndef MINI_HASHMAP_H
# define MINI_HASHMAP_H

#define LOAD_FACTOR 0.7

typedef struct	s_entry
{
	int	k;
	int	v;
	int f;  // 1: 使用中, 0: 未使用
}				t_entry;

typedef struct	s_hashtable
{
	t_entry	*buckets;
	int		capacity;
	int		size;
}				t_hashtable;

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>

unsigned long	set_prime(unsigned int bit);

#endif /* MINI_HASHMAP_H */