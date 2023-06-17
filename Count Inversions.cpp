#include <bits/stdc++.h> 
long long ans=0;
void merge(long long *arr,int l,int mid,int r)
{
    vector<int>temp;
    int i=l;
    int j=mid+1;
    while(i<=mid&&j<=r)
    {
        if(arr[i]>arr[j])
        {
            ans+=mid-i+1;
            temp.push_back(arr[j]);
            j++;
        }
        else
        {
            temp.push_back(arr[i]);
            i++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=r)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=l;i<=r;i++)
    {
        arr[i]=temp[i-l];
    }


}
void help(long long * arr,int l,int r)
{
    if(l>=r)return ;
    int mid=(l+r)/2;
    help(arr,l,mid);
    help(arr,mid+1,r);
    merge(arr,l,mid,r);
}
long long getInversions(long long *arr, int n){
  
    help(arr,0,n-1);
    return ans;
}



