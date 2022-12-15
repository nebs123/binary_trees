#include "binary_trees.h"

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
	left = (int) binary_tree_height(tree->left) +
		(tree->left ? 0 : -1);
	right = (int) binary_tree_height(tree->right) +
		(tree->right ? 0 : -1);

	return (left - right);
}
