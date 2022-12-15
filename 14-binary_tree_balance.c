#include "binary_trees.h"

/**
 * height - returns height of binary tree
 * @tree: root node of binary tree
 *
 * Return: the height of tree or 0 if tree is null
 */
size_t height(const binary_tree_t *tree)
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
 * binary_tree_balance - calculate the balance factor for tree
 * @tree: root node of the tree
 *
 * Return: an int representing the balance factor(0 if tree is NULL)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = (int) height(tree->left) +
		(tree->left ? 0 : -1);
	right = (int) height(tree->right) +
		(tree->right ? 0 : -1);

	return (left - right);
}
