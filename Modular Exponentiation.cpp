#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	int ans=1;
	x=x%m;
	if(x==0)return 0;
	while(n>0)
	{
		if(n&1)
		{
			ans=(long long)ans*x%m;
		}
		n=n>>1;
		x=(long long)x*x%m;
	}
	return ans;
}