#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node
 *
 * @node: node to measure depth of
 *
 * Return: depth of tree from node
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (0);
	return (binary_tree_depth(node->parent) + 1);
}
