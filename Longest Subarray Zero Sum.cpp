#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

    // similar approach to  longestsubarray with k sum;
    unordered_map<int,int>m;
    int ans=0,sum=0;
    for(int i=0;i<arr.size();i++)
    {
      sum+=arr[i];
      // uptill now all the number are sum it up to zero
      // this implies that uptil now this is the largest sum array

      if(sum==0)
      {
        ans=i+1;
      }
      else
      {
        // for k sum it will be sum-k
        int required=sum-0;
        // if we found that the sum is already present before that mean from the end of 
        // that sum the sum till now==0 so we get a subarray

        if(m.find(required)!=m.end())
        {
          ans=max(ans,i-m[required]);
        }
        else{
          m[sum]=i;
        }
      }
     

    }
     return ans;



  // brute force
  // int n=arr.size();
  // int ans=0;
  // for(int i=0;i<n;i++)
  // {
  //   int sum=arr[i];
  //   if(sum==0)ans=max(ans,1);
  //   for(int j=i+1;j<n;j++)
  //   {
      
  //     sum+=arr[j];
  //     if(sum==0)ans=max(ans,j-i+1);
      
  //   }
  // }
  // return ans;
  

}