#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main()
{
    BinaryTree tree;

    tree.root = new Node(20);
    tree.root->left = new Node(18);
    tree.root->right = new Node(15);
    tree.root->left->left = new Node(12);
    tree.root->left->right = new Node(11);

    cout << "Preorder Traversal: ";
    tree.preorder(tree.root);
    cout << endl;

    cout << "Inorder Traversal: ";
    tree.inorder(tree.root);
    cout << endl;

    cout << "Postorder Traversal: ";
    tree.postorder(tree.root);
    cout << endl;

    return 0;
}