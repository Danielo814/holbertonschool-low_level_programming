#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes that have at least one child
 * @tree: pointer to the root node
 * Return: node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	else
		return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
}
