#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree, or 0 if tree is NULL
 *
 * Description: Height is the number of edges from root to deepest leaf
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	/* If it's a leaf (no children), height is 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Calculate height of left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return 1 + max height of subtrees */
	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}
