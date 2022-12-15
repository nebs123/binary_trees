#include "binary_trees.h"

/**
 * binary_tree_height - returns the hegiht of binary tree
 * @tree: root node of binary tree
 *
 * Return: the height of tree or 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
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
