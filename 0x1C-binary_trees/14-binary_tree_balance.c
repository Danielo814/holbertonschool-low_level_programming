#include "binary_trees.h"
/**
 * binary_tree_height - measures hight of tree
 *
 * @tree: pointer to root
 *
 * Return: tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	left = 0;
	right = 0;
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_balance - balance factor of binary tree
 *
 * @tree: pointer to root node of tree
 * @Return: tree height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;
	int result;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	result = left - right;
	return (result);
}
