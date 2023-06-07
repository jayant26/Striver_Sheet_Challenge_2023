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

void deleteNode(LinkedListNode<int> * node) {

   LinkedListNode<int>*temp;
   // i assign the refernce of the next node to a temp node
   temp=node->next;
   // Now whwt i did was that i use the address of the node that is *node , not only node and i changed its address to the next node
   // hence the address gets changed and the node basically get delted as there is no addrress that can help us reach it
   *node=*temp;
   delete(temp);
}