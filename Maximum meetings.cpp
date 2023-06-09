#include <bits/stdc++.h> 
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    int n=end.size();
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++)
    {
        a.push_back({end[i],i});
    }
    sort(a.begin(),a.end());
    vector<int>ans;
    ans.push_back(a[0].second+1);
    int mini=a[0].first;
    for(int i=1;i<n;i++)
    {
        if(start[a[i].second]>mini)
        {
            ans.push_back(a[i].second+1);
            mini=max(mini,a[i].first);
        }
    }
    return ans;
}