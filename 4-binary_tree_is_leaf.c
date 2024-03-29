#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check leaf
 *
 * @node: node
 *
 * Return: if true 1, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right || node->left)
		return (0);
	return (1);
}
