#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: The balance factor, otherwise, if tree is NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree)
        return (0);

    int left_height = binary_tree_height(tree->left);
    int right_height = binary_tree_height(tree->right);

    return (left_height - right_height);
}