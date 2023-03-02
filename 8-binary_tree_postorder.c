#include "binary_trees.h"

/**
 * binary_tree_postorder - uses the post-order traversal to search through the binary tree.
 *@tree: points to the main/root node to traverse the tree.
 *@func: points the function to traverse the tree by calling each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree && func)
    {
        binary_tree_postorder(tree->left, func);
        binary_tree_postorder(tree->right, func);
        func(tree->n);
    }
}
