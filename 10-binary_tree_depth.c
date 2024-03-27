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
		while (tree->parent != NULL)
		{
			h += 1;
			tree = tree->parent;
		}
	}
	else
		return (0);

	return (h);
}
