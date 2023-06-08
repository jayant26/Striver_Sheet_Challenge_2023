 

/****************************************************************

 

    Following is the class structure of the Node class:

 

class Node {

public:

    int data;

    Node* next;

    Node* child;

 

    Node(int data) {

        this->data = data;

        this->next = NULL;

        this->child = NULL;

    }

};

 

*****************************************************************/

Node *mergeLists(Node *a,Node *b){

    Node *temp= new Node(0);

    Node *res=temp;

    while(a && b){

        if(a->data<b->data){

            temp->child=a;

            temp=temp->child;

            a=a->child;

        }

        else{

            temp->child=b;

            temp=temp->child;

            b=b->child;

        }

    }

        if(a){

            temp->child=a;

        }

        else{

            temp->child=b;

        }

        return res->child;

    

}

 

Node* flattenLinkedList(Node* head) 

{

    if(head==NULL||head->next==NULL){

        return head;

    }

    

 

      

    head->next= flattenLinkedList(head->next);
	Node * ans=mergeLists(head,head->next);
    head->next= NULL;

    

    return ans;

}