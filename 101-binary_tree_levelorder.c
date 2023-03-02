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
 * print_at_level - print specific level of a node
 * @tree: points to the base or root node of the tree to traverse
 * @func: points the function to traverse the tree by calling each node
 * @level: level to print
 */
void print_at_level(const binary_tree_t *tree, void (*func)(int), int level)
{
    if (tree && func)
    {
        if (level == 1)
            func(tree->n);
        else
        {
            print_at_level(tree->left, func, level - 1);
            print_at_level(tree->right, func, level - 1);
        }
    }
}

/**
 * binary_tree_levelorder - search through a binary tree in level-order traversal
 * @tree: points to the base or root node of the tree to traverse
 * @func: points the function to traverse the tree by calling each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    size_t h = 0, i = 1;

    if (tree && func)
    {
        h = binary_tree_height(tree);
        while (i <= h + 1)
        {
            print_at_level(tree, func, i);
            i++;
        }
    }
}
