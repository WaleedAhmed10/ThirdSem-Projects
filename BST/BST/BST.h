#pragma once

template <class ItemType>
class TreeType
{
private:
    struct TreeNode
    {
        ItemType info;
        TreeNode* left;
        TreeNode* right;
    };
    TreeNode* root;

public:
    TreeType();
    bool IsEmpty();
    void InsertItem(ItemType item);
    void RetrieveItem(ItemType& item, bool& found);

private:
    void RetrieveHelper(TreeNode* ptr, ItemType& item, bool& found);
    void Insert(TreeNode*& ptr, ItemType item);
};