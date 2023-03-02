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

/**
 * binary_tree_leaves - does the actaul calculation of the number of leaves
 *@tree: points to the base of the root node to calculate the number of leaves
 * Return: a value of 0 if the binary tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    else
        return (binary_tree_is_leaf(tree) +
                binary_tree_leaves(tree->right) +
                binary_tree_leaves(tree->left));
}
