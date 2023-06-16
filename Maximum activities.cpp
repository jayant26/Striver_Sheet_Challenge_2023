
#include <bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
  vector<pair<int,int>>v;
  for(int i=0;i<start.size();i++)
  {
      v.push_back({finish[i],start[i]});
  }
  sort(v.begin(),v.end());
  int ans=1;
  int e=v[0].first;
  int s=v[0].second;
  for(int i=1;i<v.size();i++)
  {
      if(v[i].second>=e)
      {
          ans++;
          e=v[i].first;
      }
  }
  return ans;
}