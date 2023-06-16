#include <bits/stdc++.h> 
void help(int i,vector<int>&temp,vector<int>&arr,vector<vector<int>>&ans)
{
    ans.push_back(temp);
    for(int j=i;j<arr.size();j++)
    {
        if(j!=i&&arr[j]==arr[j-1])continue;
        temp.push_back(arr[j]);
        help(j+1,temp,arr,ans);
        temp.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    
    vector<int>temp;
    help(0,temp,arr,ans);
        return ans;void help(int index,int sum,vector<int>&temp,vector<int>&arr,vector<vector<int>>&ans,int k)
{
  if (index >= arr.size()) {
      if(sum==k)
      {
          ans.push_back(temp);
      }
    return;
  }
    
    
    help(index+1,sum,temp,arr,ans,k);
    
        temp.push_back(arr[index]);
        help(index+1,sum+arr[index],temp,arr,ans,k);
        temp.pop_back();
    
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>>ans;
    vector<int>temp;
    help(0,0,temp,arr,ans,k);

    return ans;
}



}
