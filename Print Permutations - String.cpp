#include <bits/stdc++.h> 
void help(string &s,vector<string>&ans,string &temp,vector<pair<char,int>>&a)
{
    if(temp.size()==s.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<s.size();i++)
    {
        if(a[i].second!=1)
        {
            
            temp+=a[i].first;
            a[i].second=1;
            help(s,ans,temp,a);
            a[i].second=0;
            temp.pop_back();
        }
    }
}
vector<string> findPermutations(string &s) {
    vector<pair<char,int>>a;
    for(int i=0;i<s.size();i++)
    {
        a.push_back({s[i],0});
    }
    
    vector<string>ans;
    string temp="";
    help(s,ans,temp,a);
    
    return ans;

}
