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
        return ans;

}
