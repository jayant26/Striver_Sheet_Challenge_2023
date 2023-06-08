#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int>*reverse(LinkedListNode<int>*head)
{
    LinkedListNode<int>*forward=NULL,*prev=NULL;
    while(head)
    {
        forward=head->next;
        head->next=prev;
        prev=head;
        head=forward;
    }
    return prev;

}
bool isPalindrome(LinkedListNode<int> *head) {
    if(head==NULL||head->next==NULL)return true;

      LinkedListNode<int>* slow = head;

    LinkedListNode<int>* fast = head;
    while(fast->next!=NULL&&fast->next->next!=NULL) {

        slow = slow->next;

        fast = fast->next->next;

    }
    slow->next=reverse(slow->next);
    slow=slow->next;
    LinkedListNode<int>* start = head;
    while(slow!=NULL)
    {
        if(slow->data!=start->data)return false;
        slow=slow->next;
        start=start->next;
    }
    return true;

}