#include "BST.h"

template <class ItemType>
TreeType<ItemType>::TreeType()
{
    root = nullptr;
}

template <class ItemType>
bool TreeType<ItemType>::IsEmpty()
{
    return root == nullptr;
}

template <class ItemType>
void TreeType<ItemType>::InsertItem(ItemType item)
{
    Insert(root, item);
}

template <class ItemType>
void TreeType<ItemType>::Insert(TreeNode*& ptr, ItemType item)
{
    if (ptr == nullptr)
    {
        ptr = new TreeNode{ item, nullptr, nullptr };
    }
    else if (item < ptr->info)
    {
        Insert(ptr->left, item);
    }
    else
    {
        Insert(ptr->right, item);
    }
}

template <class ItemType>
void TreeType<ItemType>::RetrieveItem(ItemType& item, bool& found)
{
    RetrieveHelper(root, item, found);
}

template <class ItemType>
void TreeType<ItemType>::RetrieveHelper(TreeNode* ptr, ItemType& item, bool& found)
{
    if (ptr == nullptr)
    {
        found = false;
    }
    else if (item < ptr->info)
    {
        RetrieveHelper(ptr->left, item, found);
    }
    else if (item > ptr->info)
    {
        RetrieveHelper(ptr->right, item, found);
    }
    else
    {
        found = true;
        item = ptr->info;
    }
}

template class TreeType<int>;