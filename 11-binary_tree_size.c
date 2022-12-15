#include "binary_trees.h"

/**
 * binary_tree_size - prints the size of the binary tree
 * @tree: root node of the binary tree
 *
 * Return: size of binary tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}
