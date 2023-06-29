#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>ans;
    if(root==NULL)return ans;
   map<int,int>m;
   queue<TreeNode<int>*>q;
   q.push(root);
   int level=0;
   
   while(!q.empty())
   {
       int x=q.size();
       for(int i=0;i<x;i++)
       {
           auto temp=q.front();
           q.pop();
           if(m.find(level)==m.end())
           {
               m[level]=1;
               ans.push_back(temp->data);
           }
           if(temp->left)q.push(temp->left);
           if(temp->right)q.push(temp->right);
       }
       level++;
   }
   
   return ans;
}