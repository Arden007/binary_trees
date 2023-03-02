#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  checks if the node in question is a leaf node.
 *@node: points to the node in question to be checked.
 * Return: the function returns the value 1 if node is a leaf
 *         and 0 if NULL or otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);

    if (node->right == NULL && node->left == NULL)
        return (1);
    else
        return (0);
}
