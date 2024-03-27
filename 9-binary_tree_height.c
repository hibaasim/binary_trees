#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: Height of tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0, left, right;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (0);
		h += 1;
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		if (left != 0 || right != 0)
			h += 1;
	}
	else
		return (0);

	return (h);
}
