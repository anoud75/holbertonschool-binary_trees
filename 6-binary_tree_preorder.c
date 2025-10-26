#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Description: In pre-order traversal, we visit:
 *              1. Root node
 *              2. Left subtree
 *              3. Right subtree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Process current node first */
	func(tree->n);

	/* Traverse left subtree */
	binary_tree_preorder(tree->left, func);

	/* Traverse right subtree */
	binary_tree_preorder(tree->right, func);
}
