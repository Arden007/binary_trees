#include "binary_trees.h"

/**
 * binary_tree_nodes - calculates all the nodes of the tree with at least one child.
 *@tree: points to the main/root node to calculate the number of nodes.
 * Return: the function returns the value 0 if NULL or otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    if (tree->right != NULL || tree->left != NULL)
        return (1 + binary_tree_nodes(tree->right) +
                binary_tree_nodes(tree->left));
    return (0);
}
