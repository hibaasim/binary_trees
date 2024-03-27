#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size.
 *
 * Return: size of tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t h = 0;

	if (tree != NULL)
	{
		h += 1;
		if (binary_tree_size(tree->left) != 0)
			h += binary_tree_size(tree->left);
		if (binary_tree_size(tree->right) != 0)
			h += binary_tree_size(tree->right);
	}
	else
		return (0);

	return (h);
}
