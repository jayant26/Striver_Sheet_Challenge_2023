#include <bits/stdc++.h> 
int jobScheduling(vector<vector<int>> &jobs)
{
   vector<pair<int,int>>job;
   int maxi=0;
   for(auto i:jobs)
   {
       maxi=max(maxi,i[0]);
       job.push_back({i[1],i[0]});

   }


   sort(job.rbegin(),job.rend());
vector<int>fill(maxi,-1);
int ans=0;
for(auto i:job)
{
    int deadline=i.second;
    deadline--;
    while(deadline>=0&&fill[deadline]!=-1)deadline--;
    if(deadline>=0)
    {
        ans+=i.first;
        fill[deadline]=1;
    }


}
return ans;
}
