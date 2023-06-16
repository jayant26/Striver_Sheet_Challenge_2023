
#include <bits/stdc++.h>

void help(int index,int target ,vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans)
{
	if(target==0)
	{
		ans.push_back(temp);
		return ;
	}
	for(int i=index;i<arr.size();i++)
	{
		if(i!=index&&arr[i]==arr[i-1])continue;
		if(arr[i]>target)break;
		temp.push_back(arr[i]);
		help(i+1,target-arr[i],arr,temp,ans);
		temp.pop_back();
	}

	
	
}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	sort(arr.begin(),arr.end());
	vector<vector<int>>ans;
	vector<int>temp;
	help(0,target,arr,temp,ans);



	return ans;
}
