#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse tree inorder and call func on nodes
 * @tree: the root of the tree to traversee
 * @func: function to call on nodes
 *
 * Return: void (no return)
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	(*func)(tree->n);
	binary_tree_inorder(tree->right, func);
}
