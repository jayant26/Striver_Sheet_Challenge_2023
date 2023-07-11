#include<bits/stdc++.h>
// brute force;
// bool issafe(int row,int col,vector<vector<int>>&temp,int n)
// {
//     //check for row;
//     for(int j=0;j<=n;j++)
//     {
//         if(temp[row][j]==1)return false;
//     }
//     // this is not necessary as we are placing only one queen per column
//     // //check for col
//     // for(int i=0;i<n;i++)
//     // {
//     //     if(temp[i][col]==1)return false;
//     // }
//     //check for diagonal

//     int i=row,j=col;
//     // going up in diagonal
//     while(i>=0&&j>=0)
//     {
//         if(temp[i][j]==1)return false;
//         i--;
//         j--;
//     }
//     i=row,j=col;

//     // we don't need to check each diagonal as we are going from left to right
//     // going southwest in the diagonal 
//     while(i<n&&j>=0)
//     {
//          if(temp[i][j]==1)return false;
//         i++;
//         j--;

//     }
//     return true;
// }
void help(int col,vector<vector<int>>&ans,vector<vector<int>>&temp,int n, vector<int>&rc, 
 vector<int>&ulc,vector<int>&llc)
{
    if(col==n)
    {
        vector<int>curr;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                curr.push_back(temp[i][j]);
            }
        }
        ans.push_back(curr);
        
        
    }
    for(int row=0;row<n;row++)
    {
        if(!rc[row]&&!ulc[(n-1)+col-row]&&!llc[row+col])
        {
            rc[row]=1;
            ulc[(n-1)+col-row]=1;
            llc[row+col]=1;
            temp[row][col]=1;
            help(col+1,ans,temp,n,rc,ulc,llc);
            rc[row]=0;
            ulc[(n-1)+col-row]=0;
            llc[row+col]=0;
            
            temp[row][col]=0;
        }
    }
}


vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>>ans;
    vector<vector<int>>temp(n,vector<int>(n,0));
    vector<int>rowcheck(n,0);
    vector<int>upperleftcheck(2*n-1,0);
    vector<int>lowerleftcheck(2*n-1,0);
    help(0,ans,temp,n,rowcheck,upperleftcheck,lowerleftcheck);
    return ans;
}