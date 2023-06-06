#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
 sort(nums.begin(),nums.end());
 if(n==0)return 0;
 int ans=1,curr=1;
  for(int i=1;i<n;i++)
 {
     if(nums[i]==nums[i-1]+1)curr++;
     else if(nums[i]==nums[i-1])continue;
     else
     {
         ans=max(ans,curr);
         curr=1;
     }
 }
 ans=max(ans,curr);
 return ans;
}