#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node in the binary tree.
 * @tree: points to the node to calculate the depth.
 * Return: a value of 0 if the binary tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL || tree->parent == NULL)
        return (0);
    else
        return (1 + binary_tree_depth(tree->parent));
}
