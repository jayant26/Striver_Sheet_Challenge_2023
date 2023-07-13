#include<bits/stdc++.h>
int getMedian(vector<vector<int>> &matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    int required=(n*m)/2+1;
    int maxi=0;
    int ans;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,matrix[i][m-1]);

    }
    int l=1,h=maxi;
    while(l<=h)
    {
        int mid=(l+h)/2;
        int count=0;
        for(int i=0;i<n;i++)
        {
            
            int low=0,high=m-1;
            while(low<=high)
            {
                int m=(low+high)/2;
                if(matrix[i][m]<=mid)
                {
                    count+=m-low+1;
                    low=m+1;
                }
                else
                {
                    high=m-1;
                }
            }
        }
        if(count>=required)
        {
            ans=mid;
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;

    
}