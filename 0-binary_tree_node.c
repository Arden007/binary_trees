#include "binary_trees.h"

/**
 * binary_tree_node - Creation of a binary tree node..
 *@parent: points to the parent of the node.
 *@value: the value for the node created.
 * Return:the function returns a pointer to the node created on success and NULL when errors occur.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));

if (node == NULL)
return (NULL);
node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;
return (node);
}