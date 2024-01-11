#include "binary_trees.h"
/**
 * binary_tree_uncle - find the uncle of a node
 *
 * @node: is a pointer to the node to find the uncle
 *
 * Return: uncle of node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	binary_tree_t *parent = node->parent;
	binary_tree_t *grandparent = parent->parent;

	if (grandparent->left == parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}
