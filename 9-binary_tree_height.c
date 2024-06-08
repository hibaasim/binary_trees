#include "binary_trees.h"

/**
 * node_height - function that computes the height of a binary tree's node.
 * @tree: pointer to the root node of the tree to measure the height.
 * @n: accumulated height.
 * @height: pointer to the maximum height in the node's tree.
 *
 * Return: no return.
 */
void node_height(const binary_tree_t *tree, size_t n, size_t *height)
{
	if (tree != NULL)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			if (n > *height)
			{
				*height = n;
			}
		}
		else
		{
			node_height(tree->left, n + 1, height);
			node_height(tree->right, n + 1, height);
		}
	}
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: Height of tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0;

	node_height(tree, 0, &h);
	return (h);
}
