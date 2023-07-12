#include <bits/stdc++.h>
vector<int> delrow = {-1, 0, 1, 0};
vector<int> delcol ={0,1,0,-1};


void help(int i,int j ,vector<vector<int>>&maze,int n,vector<vector<int>>&ans,vector<int>&temp)
{
  
  if(i==n-1&&j==n-1 )
  {
    // this will cost us extra O(N^N);
    // we can optimise it by using only 1D array from the start
    // vector<int>curr;
    // for(int i=0;i<n;i++)
    // {
    //   for(int j=0;j<n;j++)
    //   {
    //     curr.push_back(temp[i][j]);
    //   }
    // }
    // ans.push_back(curr);
    // return;
    ans.push_back(temp);
    return ;
   
  }
  
  for(int x=0;x<4;x++)
  {
    int row=i+delrow[x];
    int col=j+delcol[x];
    if(row>=0&&col>=0&&row<n&&col<n&&maze[row][col]==1)
    {
      temp[n*row+col]=1;
      maze[row][col]=2;
       help(row,col,maze,n,ans,temp);
       maze[row][col]=1;
        temp[n*row+col]=0;
    }
   

  }
 
  
}

vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  vector<vector<int>>ans;
  vector<int>temp(n*n,0);
  temp[0]=1;
  // this step we are using as a visiting array .If we don't want to change the array we can 
  //use a 2d vis array
  maze[0][0]=2;
  help(0,0,maze,n,ans,temp);
  return ans;


 

}