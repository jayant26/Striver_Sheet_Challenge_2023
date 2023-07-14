#include <bits/stdc++.h> 
bool checks(int mid,vector<int>&a,int n, int c)
{
	int last=a[0];
	c--;
	int j=1;
	while(c!=0)
	{
		while(j<n&&last+mid>a[j])
		{
			j++;
		}
		if(j!=n)
		{
			last=a[j];
			c--;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int chessTournament(vector<int> positions , int n ,  int c){
	sort(positions.begin(),positions.end());
	int ans;

	int l=0, h=positions[n-1]-positions[0];
	while(l<=h)
	{
		int mid=(l+h)/2;
		if(checks(mid,positions,n,c))
		{
			ans=mid;
			l=mid+1;
		}
		else{
			h=mid-1;
		}
	}
	return ans;

}