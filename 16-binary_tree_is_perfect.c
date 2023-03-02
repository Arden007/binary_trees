#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a binary tree.
 *@tree: points to the base or root node to calculate the height.
 * Return: a value of 0 if the binary tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree)
    {
        int left = 0, right = 0;

        if (tree->right)
            right = 1 + binary_tree_height(tree->right);
        if (tree->left)
            left = 1 + binary_tree_height(tree->left);
        if (left > right)
            return (left);
        else
            return (right);
    }
    else
        return (0);
}

/**
 * binary_tree_size - calculates the size of the binary tree.
 * @tree:  points to the base or root node to calculate the size.
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
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 *@tree: points to the base or root node to check if the tree is perfect.
 * Return: a value of 0 if the binary tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t h = 0, perfect_size = 0;

    if (tree == NULL)
        return (0);
    h = binary_tree_height(tree);
    perfect_size = (1 << (h + 1)) - 1;
    if (perfect_size == binary_tree_size(tree))
        return (1);
    else
        return (0);
}
