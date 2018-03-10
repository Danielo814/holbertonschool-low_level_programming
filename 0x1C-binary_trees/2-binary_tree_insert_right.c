#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as right child
 * @parent: pointer to parent
 * @value: value of new
 *
 * Return: pointer to new
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	temp = parent->right;

	if (temp)
	{
		new->right = temp;
		temp->parent = new;
	}
	else
		new->right = NULL;
	parent->right = new;
	new->left = NULL;
	return (new);
}
