#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with aat least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the no of nodes
 * Return: No of nodes, otherwise, if tree is NULL, return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	else
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}

	return (nodes);
}
