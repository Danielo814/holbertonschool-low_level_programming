#include "binary_trees.h"
/**
 * binary_tree_is_full - checking to see if tree is full
 *
 * @tree: tree to be evaluated
 *
 * Return: 1 and the highest node
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left;
	int right;

	left = 0;
	right = 0;
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left && tree->right)
		return (0);
	if (tree->left && !tree->right)
		return (0);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (right == 1 && left == 1)
		return (1);
	return (0);
}
