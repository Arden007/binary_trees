#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a binary tree.
 *@tree: points to the base of the tree/root node to calculate the height.
 * Return: a value of 0 if the binary tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree)
    {
        int left = 1, right = 1;

        if (tree->right)
            right += binary_tree_height(tree->right);
        if (tree->left)
            left += binary_tree_height(tree->left);
        if (left > right)
            return (left);
        else
            return (right);
    }
    else
        return (0);
}
/**
 * binary_tree_balance - calculates the binary tree balance factor .
 *@tree: points to the base or root node to calculate the balance factor.
 * Return: a value of 0 if the binary tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
