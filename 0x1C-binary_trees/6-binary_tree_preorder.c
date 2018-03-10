#include "binary_trees.h"
/**
 * binary_tree_preorder - uses pre order traversal
 * @tree: binary tree to traverse
 * @func: function used to print
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func)
		return;
	if (!tree)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
