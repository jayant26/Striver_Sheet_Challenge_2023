#include <bits/stdc++.h>


vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>>ans;
  ans.push_back({1});
  for(int i=2;i<=n;i++)
  {
    vector<long long int>temp(i,0),prev=ans[ans.size()-1];
    temp[0]=1;
    temp[i-1]=1;
    int j=1;
    for(int x=0;x<prev.size()-1;x++)
    {
        temp[j]=prev[x]+prev[x+1];
        j++;
    }
    ans.push_back(temp);
  
  }
  return ans;
   
}

