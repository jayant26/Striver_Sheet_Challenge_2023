#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>>ans;
	sort(arr.begin(),arr.end());

	set<vector<int>>s;
	for(int i=0;i<n-2;i++)
	{
		int l=i+1,h=n-1;
		while(l<h)
		{
			
			if(arr[l]+arr[h]+arr[i]==K)
			{
				vector<int>temp={arr[i],arr[l],arr[h]};
				s.insert(temp);
				l++;
				h--;
			}
			else if(arr[l]+arr[h]+arr[i]<K)
			{
				l++;
			}
			else{
				h--;
			}
		}
	}
	for(auto j:s)
	{
		ans.push_back(j);
	}
	return ans;
}