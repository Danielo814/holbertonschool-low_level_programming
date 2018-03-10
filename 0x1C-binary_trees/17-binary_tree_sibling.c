#include "binary_trees.h"
/**
 * binary_tree_sibling - finds sibling of a node
 *
 * @node: pointer to node to find sibling
 *
 * @Return: pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
