/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     if(head==NULL||head->next==NULL||k==0)return head;

     Node* temp=head;
     int size=1;
     while(temp->next)
     {
          size++;
          temp=temp->next;
          
     }
     temp->next=head;
     k=k%size;
     k=size-k;
     while(k--)temp=temp->next;
     head=temp->next;
     temp->next=NULL;
     return head;

     //complexity is same but code is big
     // Node* dummy=new Node(0);
     // dummy->next=head;
     // int size=0;
     // Node* temp=head;
     // while(temp)
     // {
     //      size++;
     //      temp=temp->next;
     // }
     // k=k%size;
     // if(k==0)return head;
     // int first=size-k;
     // Node*pre=dummy,*curr=dummy,*next=dummy;
     // curr=pre->next;
     // next=curr->next;
     // for(int i=1;i<first;i++)
     // {
     //      curr->next=next->next;
     //      next->next=pre->next;
     //      pre->next=next;
     //      next=curr->next;

     // }
     // pre=curr;
     // int second=k;
     // curr=pre->next;
     // next=curr->next;
     // for(int i=1;i<second;i++)
     // {
     //      curr->next=next->next;
     //      next->next=pre->next;
     //      pre->next=next;
     //      next=curr->next;
     // }
     //  pre=dummy;curr=dummy;next=dummy;
     //  curr=pre->next;
     // next=curr->next;
     // for(int i=1;i<size;i++)
     // {
     //      curr->next=next->next;
     //      next->next=pre->next;
     //      pre->next=next;
     //      next=curr->next;

     // }

     // return dummy->next;

}