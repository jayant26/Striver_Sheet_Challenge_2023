//Less No of lines 
Node* ans=new Node(0);
        Node* prev=ans;
        int carry=0;
        while(first||second)
        {
            int sum=0;
            if(first!=NULL)
            {
                sum+=first->data;
                first=first->next;
            }
            if(second!=NULL)
            {
                sum+=second->data;
                second=second->next;
            }
            sum+=carry;
            carry=sum/10;
            prev->next=new Node(sum%10);
            prev=prev->next;
        }
        if(carry==1)
        {
            prev->next=new Node(1);
        }
       
        return (ans->next);
}


//Initial Code 

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node* c1=num1,*c2=num2;
    int carry=0;
    while(num1&&num2)
    {
        int x=num1->data+num2->data+carry;
        if(x>9)
        {
            carry=1;
            num1->data=x-10;
            num2->data=x-10;
        }
        else{
            num1->data=x;
            num2->data=x;
            carry=0;
        }
        num1=num1->next;
        num2=num2->next;
    }
    if(num1==NULL&&num2==NULL&&carry!=0)
    {
        Node* temp=c1;
        while(temp->next)
        {
            temp=temp->next;
        }
        temp->next=new Node(carry);
        return c1;
    }
    else{
        if(num2)
        {
            while(num2)
            {
                int x=num2->data+carry;
                if(x>9)
                {
                    carry=1;
                    num2->data=x-10;
                }
                else
                {
                    num2->data=x;
                    carry=0;
                }
                num2=num2->next;
            }
            return c2;
        }
        if(num1)
        {
            while(num1)
            {
                int x=num1->data+carry;
                if(x>9)
                {
                    carry=1;
                    num1->data=x-10;
                } 
                else 
                {
                    num1->data = x;
                    carry=0;
                }
                num1 = num1->next;
            }
            return c1;
        }
    }
    return c2;
}

