#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
  vector<pair<double,int>>item;
  int weight,value;
  for(int i=0;i<n;i++)
  { 
      weight=items[i].first;
      value=items[i].second;
      double vbyw=(double)value/(double)weight;
      item.push_back({vbyw,i});

  }
  sort(item.rbegin(),item.rend());

  double profit=0;
  for(int i=0;i<item.size();i++)
  {
      if(w==0)break;

      double mini=min(w,items[item[i].second].first);
      profit+=mini*item[i].first;
      w-=mini;
  }
  return profit;
}
