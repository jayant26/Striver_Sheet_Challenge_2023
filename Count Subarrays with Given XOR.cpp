#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    int ans=0;
    unordered_map<int,int>m;
    m[0]=1;
    int xr=0;
    for(int i=0;i<arr.size();i++)
    {
        xr^=arr[i];
        // if(xr==x)ans++;
       
            int required=xr^x;
          ans+=m[required];
        m[xr]++;
        
    }
    return ans;
     

    // Brute force
    // int ans=0;
    // for(int i=0;i<arr.size();i++)
    // {
    //     int xr=arr[i];
    //     if(xr==x)ans+=1;
    //     for(int j=i+1;j<arr.size();j++)
    //     {
    //         xr^=arr[j];
    //         if(xr==x)ans++;
    //     }
    // }
    // return ans;
}