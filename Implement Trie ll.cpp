#include <bits/stdc++.h> 
struct Node {
    std::vector<Node*> a;
    int no;
    int pre;

    Node() {
        a.resize(26, nullptr);
        no=0;
        pre=0;
    }

    void setNode(char ch) {
        a[ch - 'a'] = new Node();
       
    }

    int isEnd() {
        return no;
    }
    int isprefix(){
        return pre;
    }

    bool contains(char ch) {
        return a[ch - 'a'] != nullptr;
    }

    Node* getNode(char ch) {
        return a[ch - 'a'];
    }
    void incresew()
    {
        no+=1;
    }
    void incresep()
    {
        pre+=1;
    }
    void reducep()
    {
        pre-=1;
    }
    void reducew()
    {
        no-=1;
    }
};
class Trie{
    Node* root;
    public:

    Trie(){
        root=new Node();
    }

    void insert(string &word){
        Node* node=root;
       for(int i=0;i<word.size();i++)
       {
           if(!node->contains(word[i]))
           {
               node->setNode(word[i]);
           }
           node=node->getNode(word[i]);
           node->incresep();
       }
       node->incresew();
    }

    int countWordsEqualTo(string &word){
          Node* node=root;
        for(int i=0;i<word.size();i++)
        {
            if(!node->contains(word[i]))
            {
                return 0;
            }
            node=node->getNode(word[i]);
            
        }
        return node->isEnd();

    }

    int countWordsStartingWith(string &word){
          Node* node=root;
       for(int i=0;i<word.size();i++)
        {
            if(!node->contains(word[i]))
            {
                return 0;
            }
            node=node->getNode(word[i]);
        }
        return node->isprefix();
    }

    void erase(string &word){
          Node* node=root;
         for(int i=0;i<word.size();i++)
        {
            if(!node->contains(word[i]))
            {
                return;
            }
            node=node->getNode(word[i]);
            node->reducep();
        }
        node->reducew();
    }
};
