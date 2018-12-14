#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right child
 *
 * @parent: pointer to parent node to insert left child in
 * @value: value to store in the new node
 * Return: a pointer to the newly created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	if (parent->left == NULL)
	{
		new_node->left = NULL;
		new_node->right = NULL;
		parent->right = new_node;
	}
	else
	{
		new_node->right = parent->right;
		new_node->left = NULL;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	return (new_node);
}
