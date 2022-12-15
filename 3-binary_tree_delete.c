#include "binary_trees.h"

/**
 * binary_tree_delete - delete the memory allocated for binary tree
 * @tree: pointer to root of binary tree
 *
 * Return: void(no return)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
