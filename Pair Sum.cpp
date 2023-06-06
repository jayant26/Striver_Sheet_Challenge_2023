#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int k){
   int n=arr.size();
  map<int,int>m;
   for(int i=0;i<n;i++)
   {
      m[arr[i]]++;
   }
   vector<vector<int>>ans;
   for(auto i:m)
   {
      if(m.find(k-i.first)!=m.end())
      {
         if(i.first!=k-i.first)
         {
             vector<int>temp;
         int c1=i.second;
         int c2=m[k-i.first];
         temp.push_back(min(i.first,k-i.first));
         temp.push_back(max(i.first,k-i.first));
         for(int j=1;j<=c1*c2;j++)
         {
            ans.push_back(temp);
         }
         m.erase(i.first);
         m.erase(k-i.first);
         }
         else
         {
            int x=i.second;
            x--;
            int count=(x*(x+1))/2;
            vector<int>temp;
            temp.push_back(i.first);
            temp.push_back(i.first);
            for(int i=1;i<=count;i++)
            {
               ans.push_back(temp);
            }
            m.erase(i.first);
         }
        
      }
   }
    sort(ans.begin(),ans.end());
  
   return ans;

}