#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Poiter to the node to insert left-child in
 * @value: Value to store in the new node
 * @Return: Pointer to the created node, otherwise NULL.
            If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL)
        return (NULL);

    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }

    parent->left = new_node;

    return (new_node);
}