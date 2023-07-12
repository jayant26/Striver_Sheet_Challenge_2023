#include<bits/stdc++.h>
bool ispossible(int color,int node,vector<int>adj[],vector<int>&colorvis)
{
    for(auto i:adj[node])
    {
        if(colorvis[i]==color)return false;
    }
    return true;
}
bool help(int node,vector<int>adj[],vector<int>&colorvis,int m,int n)
{
   if(node==n)
   {
       return true;

   }
   for(int color=1;color<=m;color++)
   {
       if(ispossible(color,node,adj,colorvis))
       {
           colorvis[node]=color;
           if(help(node+1,adj,colorvis,m,n))return true;

       }
       colorvis[node]=0;
   }
   return false;
}
string graphColoring(vector<vector<int>> &mat, int m) {
    int n=mat.size();
    vector<int>adj[mat.size()];
    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat[0].size();j++)
        {
            if(mat[i][j]==1)
            {
                adj[i].push_back(j);
            }
        }
    }

    vector<int>colorvis(mat.size(),0);
    if(help(0,adj,colorvis,m,n))return "YES";
    return "NO";
}