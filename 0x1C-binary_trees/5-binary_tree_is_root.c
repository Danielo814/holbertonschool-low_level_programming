#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root node
 * @node: node to check
 *
 * Return: 1 if node is root, 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node->parent && node)
		return (1);
	else
		return (0);
}
