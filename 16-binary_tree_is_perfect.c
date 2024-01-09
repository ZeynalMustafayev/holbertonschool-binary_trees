#include "binary_trees.h"

/**
 * binary_tree_leaves - find count of binary tree leaves
 *
 * @tree: binary tree
 *
 * Return: count of leaves of tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
/**
 * binary_tree_height - find binary tree height
 *
 * @tree: binary tree
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	binary_tree_height(tree->left);
	binary_tree_height(tree->right);
	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
		return (binary_tree_height(tree->left) + 1);
	else
		return (binary_tree_height(tree->right) + 1);
}
/**
 * binary_tree_is_perfect - check binary tree perfect or not
 *
 * @tree: binary tree
 *
 * Return: if true return 1, or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leaves;
	size_t height;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	leaves = 2 << (height - 1);
	if (height == 0 || leaves == binary_tree_leaves(tree))
		return (1);
	return (0);
}
