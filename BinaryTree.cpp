#include "BinaryTree.h"
#include <iostream>
#include <memory>

using namespace std;

BTreeNode* BinaryTree::MakeBTreeNode(void)
{
   // shared_ptr<BTreeNode> treeNode(new BTreeNode{0, NULL, NULL});
   // return treeNode.get();

   BTreeNode* treeNode = new BTreeNode{0, NULL, NULL};
   return treeNode;
}

BTData BinaryTree::GetData(BTreeNode* bt)
{
   return bt->data;
}

void BinaryTree::SetData(BTreeNode* bt, BTData data)
{
   bt->data = data;
}

BTreeNode* BinaryTree::GetLeftSubTree(BTreeNode* bt)
{
   return bt->left;
}

BTreeNode* BinaryTree::GetRightSubTree(BTreeNode* bt)
{
   return bt->right;
}

void BinaryTree::MakeLeftSubTree(BTreeNode* main, BTreeNode* sub)
{
   main->left = sub;
}

void BinaryTree::MakeRightSubTree(BTreeNode* main, BTreeNode* sub)
{
   main->right = sub;
}

void BinaryTree::InorderTraverse(BTreeNode* main)
{
   if(main == NULL)
      return;

   InorderTraverse(main->left);
   cout << main->data << " ";
   InorderTraverse(main->right);

}


