#include "binary_trees.h"
/**
  * binary_tree_node - create a node
  * @parent: pointer to parent node
  * @value: value for new node
  *
  * Return: pointer to new node or NULL
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
