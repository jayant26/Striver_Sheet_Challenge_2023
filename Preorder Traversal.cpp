#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void help(vector<int>&ans,TreeNode* root)
{
    if(root==NULL)return ;
    ans.push_back(root->data);
    help(ans,root->left);
    
    help(ans,root->right);
}
vector<int> getPreOrderTraversal(TreeNode *root) {

  vector<int> ans;
  help(ans, root);
  return ans;
}