#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int n=matrix.size();
	int m=matrix[0].size();
	vector<pair<int,int>>z_pos;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==0)
			{
				z_pos.push_back({i,j});
			}
		}
	}
	for(auto temp:z_pos)
	{
		for(int i=0;i<n;i++)
		{
			matrix[i][temp.second]=0;
		}
		for(int j=0;j<m;j++)
		{
			matrix[temp.first][j]=0;
		}
	}
	return ;
}