#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &grid)
{
    vector<vector<int>>ans;
   sort(grid.begin(),grid.end());
   
   vector<int>temp;
   for(int i=0;i<grid.size();i++)
   {
       if(temp.size()==0)
       {
           temp.push_back(grid[i][0]);
           temp.push_back(grid[i][1]);
       }
       else
       {
           if(grid[i][0]>=temp[0]&&grid[i][0]<=temp[1])
           {
               temp[0]=min(temp[0],grid[i][0]);
               temp[1]=max(temp[1],grid[i][1]);
           }
           else
           {
               ans.push_back(temp);
               temp[0]=grid[i][0];
               temp[1]=grid[i][1];
           }
       }
   }

   if (ans.size() == 0) {
     ans.push_back(temp);
     return ans;
   }
   vector<int>last=ans.back();
   if(temp!=last)ans.push_back(temp);
    return ans;
}
