#include "binary_trees.h"

/**
 * binary_tree_sibling - locates the sibling of a node in the tree.
 *@node: points to the node to locate the sibling node.
 * Return: pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL);
    if (node->parent->right == node)
        return (node->parent->left);
    else
        return (node->parent->right);
}
/**
 * binary_tree_uncle - locates the uncle of a node in the tree.
 *@node: points to the node to locate the uncle node.
 * Return: pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL)
        return (NULL);
    return (binary_tree_sibling(node->parent));
}
