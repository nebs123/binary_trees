#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse the tree in preorder calling func on nodes
 * @tree: the root of the tree to traversee
 * @func: function to call on nodes
 *
 * Return: void (no return)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
