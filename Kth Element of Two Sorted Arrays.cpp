#include<bits/stdc++.h>

int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    if(m>n)
    {
        return ninjaAndLadoos(row2,row1,n,m,k);
    }

    int l=max(0,k-n),h=min(k,m);
    while(l<=h)
    {
        int cut1=(l+h)/2;
        int cut2=k-cut1;

        int l1=cut1==0?INT_MIN:row1[cut1-1];
        int l2=cut2==0?INT_MIN:row2[cut2-1];

        int r1=cut1==m?INT_MAX:row1[cut1];
        int r2=cut2==n?INT_MAX:row2[cut2];

        if(l1<=r2&&l2<=r1)
        {
            return max(l1,l2);
        }
        else if(l1>r2)
        {
            h=cut1-1;
        }
        else{
            l=cut1+1;
        }
    }


    // optimal but yet more complexity
    // int required=k;
    // int maxi=max(row1[m-1],row2[n-1]);
    // int l=1,h=maxi;
    // int ans;
    // while(l<=h)
    // {
    //     int mid=(l+h)/2;
    //     int count=0;
    //     int low=0,high=m-1;
    //     while(low<=high)
    //     {
    //         int m=(low+high)/2;
    //         if(row1[m]<=mid)
    //         {
    //             count+=m-low+1;
    //             low=m+1;
    //         }
    //         else{
    //             high=m-1;
    //         }
    //     }
    //     low=0,high=n-1;
    //     while(low<=high)
    //     {
    //          int m=(low+high)/2;
    //         if(row2[m]<=mid)
    //         {
    //             count+=m-low+1;
    //             low=m+1;
    //         }
    //         else{
    //             high=m-1;
    //         }

    //     }

    //     if(count>=k)
    //     {
    //         ans=mid;
    //         h=mid-1;
    //     }
    //     else
    //     {
    //         l=mid+1;
    //     }
    // }
    // return ans;


    // //naive solution
    // int i=0,j=0;
    // while(i<m&&j<n)
    // {
    //     if(row1[i]<=row2[j])
    //     {
    //         k--;
    //         if(k==0)
    //         {
    //             return row1[i];
    //         }
    //         i++;
    //     }
    //     else{
    //         k--;
    //         if(k==0)
    //         {
    //             return row2[j];
    //         }
    //         j++;

    //     }
    // }

    // while(i<m)
    // {
    //     k--;
    //     if(k==0)
    //     {
    //         return row1[i];

    //     }
    //     i++;
    // }
    // while(j<n)
    // {
    //     k--;
    //     if(k==0)
    //     {
    //         return row2[j];
    //     }
    //     j++;
    // }

}