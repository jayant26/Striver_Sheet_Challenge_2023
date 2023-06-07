/*
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
*/
Node* reverse(Node* head)
{
    Node* forward,*curr=head,*prev=NULL;
    while(curr)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node* curr = head;
    Node* pvs = NULL;
    
    while(--x){
        pvs = curr;
        curr = curr->next;
    }
    
    if(curr == head){
        head = head->next;
    }
    
    else{
        pvs->next = curr->next;
    }
    
    free(curr);
    
    return head;
}

Node* removeKthNode(Node* head, int K)
{
    head=reverse(head);
    head=deleteNode(head, K);
    head= reverse(head);
    return head;
}

