#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left == NULL)
		free(tree->left);
	if (tree->right == NULL)
		free(tree->right);
	free(tree);
}
