#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as
 * the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 *Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child, *tmp;

	if (parent == NULL)
		return (NULL);
	left_child = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		tmp = parent->left;
		parent->left = left_child;
		tmp->parent = left_child;
		left_child->left = tmp;
	}
	else
		parent->left = left_child;

	return (left_child);
}
