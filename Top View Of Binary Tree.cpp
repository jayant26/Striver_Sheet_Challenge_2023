#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
     vector<int>ans;
     if(root==NULL)return ans;
   map<int,int>m;
   queue<pair<TreeNode<int> *,int>>q;
   q.push({root,0});
   while(!q.empty())
   {
       int x=q.size();
       for(int i=0;i<x;i++)
       {
           auto temp=q.front();
           q.pop();
            TreeNode<int> * node=temp.first;
           int col=temp.second;
           if(m.find(col)==m.end())
           {
               m[col]=node->val;
           }
           if(node->left)q.push({node->left,col-1});
           if(node->right)q.push({node->right,col+1});
       }
       
   }
 
       for(auto i:m)
       {
           ans.push_back(i.second);
       }
       return ans;
}