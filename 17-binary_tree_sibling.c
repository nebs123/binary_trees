#include "binary_trees.h"

/**
 * binary_tree_sibling - retrieve sibling of given node
 * @node: node in binary tree
 *
 * Return: pointer to sibling or NULL if sibling doesn't exist
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);
}
