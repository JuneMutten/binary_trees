#include "binary_trees.h"

/**
 *  binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    if (!tree->left || !tree->right)
        return (0);

    int left_height = binary_tree_height(tree->left);
    int right_height = binary_tree_height(tree->right);

    if (left_height != right_height)
        return (0);

    return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}