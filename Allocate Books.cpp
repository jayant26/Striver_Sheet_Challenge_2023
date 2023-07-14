#include <bits/stdc++.h> 

bool checks(long long mid,vector<int>&time,int n)
{
	int i=0;
	long long curr=mid;
	int count=0;
	if(mid<*max_element(time.begin(),time.end()))return false;
	while(i<time.size())
	{
		if(curr<time[i])
		{
			count++;
			curr=mid-time[i];
		
		}
		else{
			curr-=time[i];
		}
		i++;
	}
	if(curr>=0&&curr!=mid)count++;
	// cout<<count<<" for the mid "<<mid<<endl;
	if(count<=n)return true;
	return false;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	long long sum=0;
	for(int i=0;i<time.size();i++)
	{
		sum+=time[i];
	}
	long long l=1,h=sum;
	long long ans;
	while(l<=h)
	{
		long long mid=(l+h)/2;
		if(checks(mid,time,n))
		{
			ans=mid;
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return ans;
}