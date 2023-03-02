#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts the right-hand node
 *@parent: points to the right-hand node created.
 *@value: the value for the right-hand node created..
 * Return: the function returns a pointer to the node created on success and NULL when errors occur or parent node is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node = NULL;

if (parent == NULL)
return (NULL);
node = malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);

node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;
if (parent->right == NULL)
parent->right = node;
else
{
node->right = parent->right;
parent->right = node;
node->right->parent = node;
}
return (node);
}
