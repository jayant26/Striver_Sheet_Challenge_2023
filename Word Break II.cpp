#include <bits/stdc++.h> 
void help(int i,string&s,vector<string>&ans,string&temp,unordered_map<string,int>m)
{
    if(i==s.size())
    {
        ans.push_back(temp);
        return ;
    }

    // trying all strings after index i which can be find in dictionary
    for(int index=i;index<s.size();index++)
    {
        int curr=temp.size();
        if(m[s.substr(i,index-i+1)])
        {
            temp+=s.substr(i,index-i+1);
            temp+=" ";
            help(index+1,s,ans,temp,m);
            //Bactracking step
            while(temp.size()!=curr)
            {
                temp.pop_back();
                
            }
        }
    }
   
    
   
}


vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    vector<string>ans;
    string temp="";
    unordered_map<string,int>m;
    for(auto i:dictionary)m[i]=1;
    help(0,s,ans,temp,m);
    return ans;



}