#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node, or NULL if:
 *         - node is NULL
 *         - parent is NULL
 *         - node has no sibling
 *
 * Description: A sibling is the other child of the same parent
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If node is left child, return right child (sibling) */
	if (node->parent->left == node)
		return (node->parent->right);

	/* If node is right child, return left child (sibling) */
	return (node->parent->left);
}
