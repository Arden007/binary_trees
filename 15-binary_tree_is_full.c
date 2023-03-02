#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if the memory allocated to the binary tree is full.
 *@tree: points to the base or root node of the tree to check the if the tree is full.
 * Return: a value of 0 if the binary tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    if (tree->left != NULL && tree->right != NULL)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
    if (tree->left == NULL && tree->right == NULL)
        return (1);
    return (0);
}
