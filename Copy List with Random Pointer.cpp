#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
   

    LinkedListNode<int> *temp=head;
    while(temp!=NULL)
    {
        LinkedListNode<int> * dummy=new LinkedListNode<int>(temp->data);
        dummy->next=temp->next;
        dummy->random=NULL;
        temp->next=dummy;
        temp=temp->next->next;
    }
    LinkedListNode<int> *item=head;
    while(item!=NULL)
    {
        if(item->random!=NULL)item->next->random=item->random->next;
        item=item->next->next;
    }
    item=head;
    LinkedListNode<int> *dummy=new LinkedListNode<int>(0);
    temp=dummy;
   
    // dummy->next=item->next;
    LinkedListNode<int> *front;
    while(item!=NULL)
    {
        front=item->next->next;
        temp->next=item->next;
        item->next=front;
        temp=temp->next;
        item=front;
        // item=item->next;
    }
    return dummy->next;

    //Brute force , more space complexity
    // unordered_map<LinkedListNode<int> *,LinkedListNode<int> *>m;
    // LinkedListNode<int> * temp=head;
    // while(temp!=NULL)
    // {
    //     m[temp]=new LinkedListNode<int>(temp->data);
    //     temp=temp->next;
    // }
    // temp=head;
    // while(temp!=NULL)
    // {
    //     m[temp]->next=temp->next;
    //     m[temp]->random=temp->random;
    //     temp=temp->next;
    // }
    // return m[head];
}
