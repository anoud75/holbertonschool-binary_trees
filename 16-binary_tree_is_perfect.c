#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height of tree, or -1 if NULL
 */
int tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * tree_size - measures the size of a binary tree
 * @tree: pointer to the root node
 *
 * Return: size of tree, or 0 if NULL
 */
size_t tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + tree_size(tree->left) + tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 *         If tree is NULL, return 0
 *
 * Description: A perfect binary tree has all levels completely filled.
 *              All leaves are at the same level.
 *              For height h, must have exactly 2^(h+1) - 1 nodes.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;
	size_t size, expected_size;

	if (tree == NULL)
		return (0);

	height = tree_height(tree);
	size = tree_size(tree);

	/* Perfect tree of height h has 2^(h+1) - 1 nodes */
	expected_size = (1 << (height + 1)) - 1;  /* 2^(h+1) - 1 */

	return (size == expected_size);
}
