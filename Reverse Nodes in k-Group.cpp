#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	if(head == NULL||head->next == NULL) return head;
	Node* dummy=new Node(0);
	dummy->next=head;
	Node * pre=dummy,*curr=dummy,*next=dummy;
	int size=0;
	Node* temp=head;
	while(temp!=NULL)
	{
		size++;
		temp=temp->next;
	}
	int k=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(size==0)break;
		k=min(size,b[i]);
		if(k==0)continue;
		curr=pre->next;
		next=curr->next;
		for(int j=1;j<k;j++)
		{
			curr->next=next->next;
			next->next=pre->next;
			pre->next=next;
			next=curr->next;
		}
		
		pre=curr;
		
		
		size-=k;

	}
	return dummy->next;
}