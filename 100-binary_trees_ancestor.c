#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node of the two
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *first_ancestor, *second_ancestor;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	first_ancestor = first->parent, second_ancestor = second->parent;
	if (first == second_ancestor || !first_ancestor ||
			(!first_ancestor->parent && second_ancestor))
		return (binary_trees_ancestor(first, second_ancestor));
	else if (first_ancestor == second || !second_ancestor ||
			(!second_ancestor->parent && first_ancestor))
		return (binary_trees_ancestor(first_ancestor, second));
	return (binary_trees_ancestor(first_ancestor, second_ancestor));
}
