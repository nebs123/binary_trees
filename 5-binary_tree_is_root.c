#include "binary_trees.h"

/**
 * binary_tree_is_root - test if binary tree node is root
 * @node: the node to test
 *
 * Return: 1 if node is root otherwise 0(or if node is null)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!(node->parent));
}
