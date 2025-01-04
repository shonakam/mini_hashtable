#include "mini_hashmap.h"

t_hashtable	*create_table(unsigned int capacity)
{
	t_hashtable *t = (t_hashtable *)malloc(sizeof(t_hashtable));
	if (!t) return (NULL);

	t->capacity = capacity;
	t->size = 0;
	t->buckets = (t_entry *)malloc(sizeof(t_entry) * capacity);
	if (!t->buckets) return (free(t), NULL);
	for (int i = 0; i < capacity; i++)
	{
		t->buckets[i].k = NULL;
		t->buckets[i].v = NULL;
		t->buckets[i].f = 0;
	}
	return (t);
}

void	put_entry(t_hashtable *t, void *k, void *s)
{}
void	get_value(t_hashtable *t, void *k)
{}

void	delete_entry(t_hashtable *t, void *k)
{}

void	resize()
{

}

// Knuth Multiplicative Hash
unsigned int knuth_hash(unsigned long p, int k, int capacity)
{
	return (k * p) % capacity;
}