#include "binary_trees.h"
/**
 * binary_tree_size - measures size of binary tree
 *
 * @tree: pointer to root node
 *
 * @Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t store;

	if (tree == NULL)
		return (0);

	store = binary_tree_size(tree->left) + 1;
	store += binary_tree_size(tree->right);
	return (store);
}
