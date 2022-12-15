#include "binary_trees.h"

/**
 * height - returns height of binary tree
 * @tree: root node of binary tree
 *
 * Return: the height of tree or 0 if tree is null
 */
size_t height2(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (tree->left || tree->right)
	{
		return (1 + (left > right ? left : right));

	} else
	{
		return (left > right ? left : right);
	}
}

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
			height2(tree->left) ==
			height2(tree->right));

	if (!tree->left && !tree->right)
		return (1);

	return (0);
}
