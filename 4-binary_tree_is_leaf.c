#include "binary_trees.h"

/**
 * binary_tree_is_leaf - test if node is a leaf or not
 * @node: the node of binary tree to test
 *
 * Return: 1 if node is a leaf or 0 if it is not leaf(or node is null)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!(node->left) && !(node->right));
}
