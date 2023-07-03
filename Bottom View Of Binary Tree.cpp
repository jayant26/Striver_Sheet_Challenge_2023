#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){

   map<int,int>m;
   queue<pair<BinaryTreeNode<int> *,int>>q;
   q.push({root,0});
   while(!q.empty())
   {
       int x=q.size();
       for(int i=0;i<x;i++)
       {
           auto temp=q.front();
           q.pop();
           BinaryTreeNode<int> * node=temp.first;
           int column=temp.second;
           m[column]=node->data;

           if(node->left)q.push({node->left,column-1});
           if(node->right)q.push({node->right,column+1});
       }
   }
   vector<int>ans;
   for(auto i:m)
   {
       ans.push_back(i.second);
   }
    return ans;
}
