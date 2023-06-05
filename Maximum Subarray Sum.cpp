#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long ans=INT_MIN;
    long long curr=0;
    for(int i=0;i<n;i++)
    {
        curr+=arr[i];
        ans=max(ans,curr);
        if(curr<0)
        {
            curr=0;
        }
    }
    ans=max(ans,curr);
    return ans;
     
}        