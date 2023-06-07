/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

#include <bits/stdc++.h>
bool detectCycle(Node *head)
{
	 unordered_map<Node*,int>s;
    while(head)
    {
        if(s.find(head)==s.end())
        {
            s[head]=1;
        }
        else{
            return true;
        }
        head=head->next;
    }
    return false;
}