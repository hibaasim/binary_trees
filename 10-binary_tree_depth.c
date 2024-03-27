#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a binary tree
 * @tree: pointer to the node to measure the depth.
 *
 * Return: Depth of tree or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t h = 0;

	if (tree != NULL)
	{
		if (tree->parent == NULL)
			return (0);
		h += 1;
		if (binary_tree_depth(tree->parent) != 0)
			h += 1;
	}
	else
		return (0);

	return (h);
}
