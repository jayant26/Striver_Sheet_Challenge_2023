#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    
    int prev,curr;
    int left=0,right=m-1,top=0,bottom=n-1;
    // We will perform the pattern of going RIGHT -> BOTTOM -> LEFT -> TOP

    // Performing right
while(top<bottom&&left<right)
{   
     prev=mat[top+1][left];

     for (int i = left; i <= right; i++) {
       curr = mat[top][i];
       mat[top][i] = prev;
       prev = curr;
     }
    top++;

    //Performing bottom
    for(int i=top;i<=bottom;i++)
    {
         curr=mat[i][right];
            mat[i][right]=prev;
            prev=curr;
    }
    right--;

    // Performing Left
    if(top<=bottom)
    {
          for(int i=right;i>=left;i--)
    {
        curr=mat[bottom][i];
            mat[bottom][i]=prev;
            prev=curr;
    }
    bottom--;

    }
  
    //Performing Top
if(left<=right)
{
  for (int i = bottom; i >= top; i--) {
    curr=mat[i][left];
            mat[i][left]=prev;
            prev=curr;
  }
  left++;
}
}




   
    return ;

}