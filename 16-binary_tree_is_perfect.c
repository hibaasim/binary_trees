#include "binary_trees.h"

/**
 * check_tree - check's the tree's leaves and height
 * @tree: the tree/node
 * @val: iteration
 * @leaf: pointer to the leaves
 * @height: pointer to the tree height
 *
 * Return: nothing
 */
void check_tree(const binary_tree_t *tree, int val, int *leaf, int *height)
{
	if (tree == NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			if (leaf != NULL)
				(*leaf)++;
			if (height != NULL && val > *height)
				(*height) = val;
		}
		else
		{
			check_tree(tree->left, val + 1, leaf, height);
			check_tree(tree->right, val + 1, leaf, height);
		}
	}
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 if not or NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leaf = 0, height = 0;

	check_tree(tree, 0, &leaf, &height);

	return (leaf == (1 << height) ? 1 : 0);

}
