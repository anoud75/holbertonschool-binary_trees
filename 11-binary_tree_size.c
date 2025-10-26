#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of the tree (number of nodes), or 0 if tree is NULL
 *
 * Description: Size is the total count of all nodes in the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Count current node + all nodes in left and right subtrees */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
