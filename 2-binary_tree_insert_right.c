#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 *Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child, *tmp;

	if (parent == NULL)
		return (NULL);
	right_child = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		tmp = parent->right;
		parent->right = right_child;
		tmp->parent = right_child;
		right_child->right = tmp;
	}
	else
		parent->right = right_child;

	return (right_child);
}
