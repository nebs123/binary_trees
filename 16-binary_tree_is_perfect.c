#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: root node of the binary tree
 *
 * Return: 1 if perfect. 0 if NULL or not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right) &&
			binary_tree_height(tree->left) ==
			binary_tree_height(tree->right));

	if (!tree->left && !tree->right)
		return (1);

	return (0);
}
