#include "binary_trees.h"

/**
 * binary_tree_inorder - uses the in-order traversal to search through the binary tree.
 *@tree: points to the main/root node to traverse the tree.
 *@func: points the function to traverse the tree by calling each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree && func)
    {
        binary_tree_inorder(tree->left, func);
        func(tree->n);
        binary_tree_inorder(tree->right, func);
    }
}
