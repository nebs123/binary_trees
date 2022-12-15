#include "binary_trees.h"

/**
 * binary_tree_insert_left - create new node and insert it to left of parent
 * @parent: parent of the new node
 * @value: value of the new node
 *
 * Return: newly created node or NULL on failure(or if parent is NULL)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *left = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	left = parent->left;
	parent->left = new_node;

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = left;
	new_node->right = NULL;

	if (left)
		left->parent = new_node;

	return (new_node);
}
