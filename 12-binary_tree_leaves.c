#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: The nimber of leaves or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)	
{
	size_t h = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		h += 1;
		return (h);
	}
	h += binary_tree_leaves(tree->left);
	h += binary_tree_leaves(tree->right);

	return (h);
}
