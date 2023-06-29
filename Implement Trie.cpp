/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */
#include <bits/stdc++.h> 
struct Node{
    vector<Node*>a;
    bool flag;

      Node()
    {
        a.resize(26,NULL);
        flag=false;
    }

    bool contains(char c)
    {
        if(a[c-'a']!=NULL)return true;
        return false;
    }

    Node* getNode(char c)
    {
        return a[c-'a'];
    }

    void setNode(char c)
    {
        a[c-'a']=new Node();
    } 

    void setend()
    {
        flag=true;
    }
    bool isend()
    {
        return flag;
    }  




};
class Trie {

public:
    Node* root;
    /** Initialize your data structure here. */
    Trie() {
        root=new Node();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        Node* node=root;
        for(int i=0;i<word.size();i++)
        {
            if(!node->contains(word[i]))
            {
                node->setNode(word[i]);
            }
            node=node->getNode(word[i]);
        }
        node->setend();
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node* node=root;
        for(int i=0;i<word.size();i++)
        {
            if(!node->contains(word[i]))return false;
            node=node->getNode(word[i]);
        }
        return node->isend();
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node* node=root;
        for(int i=0;i<prefix.size();i++)
        {
            if(!node->contains(prefix[i]))return false;
            node=node->getNode(prefix[i]);
        }
        return true;
    }
};