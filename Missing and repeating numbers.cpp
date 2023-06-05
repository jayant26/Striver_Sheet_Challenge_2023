#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	long long sum=0;
	int extra=-1,mis=-1;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int exp=(n*(n+1))/2;

	for(int i=0;i<n;i++)
	{
		int index=abs(arr[i]);
		if(arr[index]<0)
		{
			extra=index;
			break;
		}
		arr[index]=-arr[index];
	}
	pair<int,int>ans;
	ans={extra-(sum-exp),extra};
	return ans;	
}
