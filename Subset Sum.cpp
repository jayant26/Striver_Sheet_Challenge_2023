#include <bits/stdc++.h> 
void help(int i,int sum,vector<int>&ans,vector<int>&num)
{
    if(i<0)return ;
    sum+=num[i];
    ans.push_back(sum);
    help(i-1,sum,ans,num);
    sum-=num[i];
    help(i-1,sum,ans,num);
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int>ans;
    ans.push_back(0);
    help(num.size()-1,0,ans,num);
    sort(ans.begin(),ans.end());
    return ans;
}

