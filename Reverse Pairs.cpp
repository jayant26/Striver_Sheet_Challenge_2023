#include <bits/stdc++.h> 
void merge(vector<int>&arr, int start,int mid,int end,int &ans)
{
	int j=mid+1;
	for(int i=start;i<=mid;i++)
	{
		while(j<=end&&arr[i]>2*(long)arr[j])j++;
		ans+=j-(mid+1);
	}
	vector<int>temp;
	int i=start;j=mid+1;
	while(i<=mid&&j<=end)
	{
		if(arr[i]<arr[j])
		{
			temp.push_back(arr[i]);
			i++;
		}
		else
		{
			temp.push_back(arr[j]);
			j++;
		}
	}
	while(i<=mid)
	{
		temp.push_back(arr[i]);
		i++;

	}
	while(j<=end)
	{
		temp.push_back(arr[j]);
		j++;
	}
	for(int i=start;i<=end;i++)
	{
		arr[i]=temp[i-start];
	}


}
void help(vector<int>&arr,int start,int end , int &ans)
{
	if(start>=end)return ;
	int mid=(start+end)/2;
	help(arr,start,mid,ans);
	help(arr,mid+1,end,ans);
	merge(arr,start,mid,end,ans);
}
int reversePairs(vector<int> &arr, int n){
	int ans=0;
	help(arr,0,n-1,ans);
	return ans;	
}

