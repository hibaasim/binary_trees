#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree.
 * @tree: the binary tree to measure.
 * Return: balance factor.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0, diffr = 0;

	if (tree)
	{
		l_height = ((int)binary_tree_height_h(tree->left));
		r_height = ((int)binary_tree_height_h(tree->right));
		diffr = l_height - r_height;
	}
	return (diffr);
}

/**
 * binary_tree_height_h - helper function to find the hight of a binary tree.
 * @tree: the tree to measure height.
 * Return: the height of the tree.
*/

size_t binary_tree_height_h(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		l = binary_tree_height_h(tree->left);
		r = binary_tree_height_h(tree->right);
		return ((l > r) ? l + 1 : r + 1);
	}
}
