#include <bits/stdc++.h> 
vector<int> merge(vector<int>a,vector<int>b)
{
    vector<int>temp;
    int i=0;
    int j=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<b[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(b[j]);
            j++;
        }
    }
    while(i<a.size())
    {
        temp.push_back(a[i]);
        i++;
    }
    while(j<b.size())
    {
        temp.push_back(b[j]);
        j++;
    }
    return temp;
}
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    vector<int>ans;
    for(int i=0;i<k;i++)
    {
        ans=merge(ans,kArrays[i]);
    } 
    return ans;
}
