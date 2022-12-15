#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse the tree postorder calling func on nodes
 * @tree: the root of the tree to traversee
 * @func: function to call on nodes
 *
 * Return: void (no return)
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}
