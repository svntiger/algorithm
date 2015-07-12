#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#typedef struct tree_node {
    struct tree_node *left;
    struct tree_node *right;
    unsigned int data;
}tree_node_t;

#typedef void (tree_node_t *) handle_func;

void traversal_tree_by_preorder(tree_node_t *head, handle_func callback)
{
    callback(head);
    if (head->left) {
        traversal_tree_by_preorder(head->left, callback);
    }
    if (head->right) {
        traversal_tree_by_preorder(head->right, callback);
    }
}

void *traversal_tree_by_inorder(tree_node_t *head, handle_func callback)
{
    if (head->left) {
        traversal_tree_by_inorder(head->left, callback);
    }
    callback(head);
    if (head->right) {
        traversal_tree_by_inorder(head->right, callback);
    }
}

void *traversal_tree_by_postorder(tree_node_t *head, handle_func callback)
{
    if (head->left) {
        traversal_tree_by_postorder(head->left, callback);
    }
    if (head->right) {
        traversal_tree_by_postorder(head->right, callback);
    }
    callback(head);
}


