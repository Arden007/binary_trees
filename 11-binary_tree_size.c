#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of the binary tree.
 * @tree:  points to the base of the root node to calculate the size.
 * Return: a value of 0 if the binary tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    {
        size_t n_left, n_right;

        n_left = binary_tree_size(tree->left);
        n_right = binary_tree_size(tree->right);
        return (1 + n_left + n_right);
    }
}
