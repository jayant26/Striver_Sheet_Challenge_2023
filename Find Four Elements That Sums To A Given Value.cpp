#include <bits/stdc++.h>

string fourSum(vector<int> nums, int target, int n) {
   map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[nums[i]]++;
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
           int low=j+1,high=n-1;
           while(low<high)
           {
               if(nums[i]+nums[j]+nums[low]+nums[high]==target)return "Yes";
               else if(nums[i]+nums[j]+nums[low]+nums[high]>target)
               {
                   high--;
               }
               else
               {
                   low++;
               }
           }

        }
    }
    return "No";
}
