#include<bits/stdc++.h>

string kthPermutation(int n, int k) {
    int fact=1;
  vector<int>per;
  for(int i=1;i<=n-1;i++)
  {
      fact*=i;
      per.push_back(i);
  }
  per.push_back(n);
  k--;
  string ans="";
  while(true)
  {
      int number=per[k/fact];
      ans+=to_string(number);

      per.erase(per.begin()+k/fact);
      if(per.size()==0)break;
      k=k%fact;
      fact=fact/per.size();
  }
  return ans;   
     
}
