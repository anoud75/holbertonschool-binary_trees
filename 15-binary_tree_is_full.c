#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, 0 otherwise
 *         If tree is NULL, return 0
 *
 * Description: A full binary tree is one where every node has either
 *              0 children (leaf) or 2 children (no nodes with only 1 child)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If it's a leaf (no children), it's full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If node has both children, check if both subtrees are full */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	/* If node has only one child, it's not full */
	return (0);
}
