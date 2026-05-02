#pragma once
#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node* left;
    Node* right;
    Node(int data);
};

class BinaryTree
{
public:
    Node* root;
    BinaryTree();
    void preorder(Node* node);
    void inorder(Node* node);
    void postorder(Node* node);
};