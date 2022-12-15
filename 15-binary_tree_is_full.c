#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a tree is a full binary tree
 * @tree: root node of the binary tree
 *
 * Return: 0 if NULL or if not full. 1 if tree is full binary tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	if (!(tree->left) && !(tree->right))
		return (1);

	return (0);
}
