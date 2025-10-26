#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using post-order
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Description: In post-order traversal, we visit:
 *              1. Left subtree
 *              2. Right subtree
 *              3. Root node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Traverse left subtree */
	binary_tree_postorder(tree->left, func);

	/* Traverse right subtree */
	binary_tree_postorder(tree->right, func);

	/* Process current node */
	func(tree->n);
}
