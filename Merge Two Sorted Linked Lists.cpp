#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int> *ans=new Node<int>(0);
    Node<int> *ptr=ans;
    while(first&&second)
    {
        if(first->data>=second->data)
        {
            ptr->next=new Node<int>(second->data);
            second=second->next;
            
        }
        else
        {
            ptr->next=new Node<int>(first->data);
            first=first->next;
        }
        ptr=ptr->next;
    }
    if(first)
    {
        ptr->next=first;
    }
    if(second)
    {
        ptr->next=second;
    }
    return ans->next;
}
