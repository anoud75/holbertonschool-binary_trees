#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Description: In in-order traversal, we visit:
 *              1. Left subtree
 *              2. Root node
 *              3. Right subtree
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Traverse left subtree */
	binary_tree_inorder(tree->left, func);

	/* Process current node */
	func(tree->n);

	/* Traverse right subtree */
	binary_tree_inorder(tree->right, func);
}
