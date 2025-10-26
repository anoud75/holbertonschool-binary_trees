#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node, or NULL if:
 *         - node is NULL
 *         - node has no parent
 *         - node has no grandparent
 *         - node has no uncle
 *
 * Description: Uncle is the sibling of the parent node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* Uncle is the sibling of the parent */
	/* If parent is left child, uncle is right child (and vice versa) */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
