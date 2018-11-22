#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main()
{
    BinaryTree binaryTreeObj;
    BTreeNode* bt1 = binaryTreeObj.MakeBTreeNode();
    BTreeNode* bt2 = binaryTreeObj.MakeBTreeNode();
    BTreeNode* bt3 = binaryTreeObj.MakeBTreeNode();
    BTreeNode* bt4 = binaryTreeObj.MakeBTreeNode();

    binaryTreeObj.SetData(bt1, 1);
    binaryTreeObj.SetData(bt2, 2);
    binaryTreeObj.SetData(bt3, 3);
    binaryTreeObj.SetData(bt4, 4);

    binaryTreeObj.MakeLeftSubTree(bt1, bt2);
    binaryTreeObj.MakeRightSubTree(bt1, bt3);
    binaryTreeObj.MakeLeftSubTree(bt2, bt4);

    //cout << binaryTreeObj.GetData(binaryTreeObj.GetLeftSubTree(bt1));

    binaryTreeObj.InorderTraverse(bt1);

    return 0;
}



