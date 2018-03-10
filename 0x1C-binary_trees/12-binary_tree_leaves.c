#include "binary_trees.h"
/**
 * binary_tree_leaves - counts how many leaves are in tree
 * @tree: tree to count
 *
 * Return: addition of sides
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	left = 0;
	right = 0;
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
