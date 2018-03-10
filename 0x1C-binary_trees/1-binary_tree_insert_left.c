#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as left child
 * @parent: pointer to parent
 * @value: value of new
 *
 * Return: pointer to new
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	if (parent->left)
	{
		new->left = parent->left;
		parent->left = new;
		new->left->parent = new;
	}
	else
		parent->left = new;
	return (new);
}
