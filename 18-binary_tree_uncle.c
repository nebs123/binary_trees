#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle of the given node in binary tree
 * @node: node in a binary tree
 *
 * Return: pointer to uncle node. NULL if node NULL or uncle doesn't exist
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandpa;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	grandpa = parent->parent;

	if (grandpa->left == parent)
		return (grandpa->right);
	else
		return (grandpa->left);
}
