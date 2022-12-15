#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert new node to right of parent tree
 * @parent: parent of the new node
 * @value: value of the new node
 *
 * Return: newly created node or NULL on failure(or if parent is NULL)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *right = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	right = parent->right;
	parent->right = new_node;

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = right;

	if (right)
		right->parent = new_node;

	return (new_node);
}
