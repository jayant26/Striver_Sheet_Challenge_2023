#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    int ans=0;
    int i=0,j=0;
    unordered_set<char>s;
    while(i<input.size()&&j<input.size())
    {
        if(s.find(input[j])==s.end())
        {
            
            s.insert(input[j]);
            j++;
            
        }
        else
        {
            ans=max(ans,j-i);
            s.erase(input[i]);
            i++;

        }    
    }
    ans=max(ans,j-i);
    int z=s.size();
    ans=max(ans,z);
    return ans;

}