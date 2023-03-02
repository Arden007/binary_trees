#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the node in question is the main/root node.
 *@node: points to the node in question to be checked.
 * Return: the function returns the value 1 if node is the main/root node
 *         and 0 if NULL or otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);
    if (node->parent == NULL)
        return (1);
    else
        return (0);
}
