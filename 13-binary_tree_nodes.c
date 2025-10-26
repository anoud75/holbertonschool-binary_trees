#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the nodes
 *
 * Return: number of nodes with at least one child, or 0 if tree is NULL
 *
 * Description: An internal node is a node that has at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If node has at least one child, count it */
	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	}

	/* If it's a leaf (no children), don't count it but check subtrees */
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
