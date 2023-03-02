#include "binary_trees.h"

/**
 * binary_tree_delete - format all the data, eraze the binary tree
 *@tree: points to the main(root) node of the binary tree to delete the entire structure.
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree)
{
binary_tree_delete(tree->right);
binary_tree_delete(tree->left);
free(tree);
}
}
