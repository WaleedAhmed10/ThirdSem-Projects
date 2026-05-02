#include "BinaryTree.h"
#include <iostream>
using namespace std;

Node::Node(int data)
{
    key = data;
    left = nullptr;
    right = nullptr;
}

BinaryTree::BinaryTree()s
{
    root = nullptr;
}

void BinaryTree::preorder(Node* node)
{
    if (node != nullptr)
    {
        cout << node->key << " ";
        preorder(node->left);
        preorder(node->right);
    }
}

void BinaryTree::inorder(Node* node)
{
    if (node != nullptr)
    {
        inorder(node->left);
        cout << node->key << " ";
        inorder(node->right);
    }
}

void BinaryTree::postorder(Node* node)
{
    if (node != nullptr)
    {
        postorder(node->left);
        postorder(node->right);
        cout << node->key << " ";
    }
}