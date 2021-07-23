//Delete node in Doubly Linked List 

//https://practice.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=-1&page=1&query=category[]Linked%20Listdifficulty[]-1page1category[]Linked%20List#
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      Node *temp=head_ref,*l,*r;
      if(x==1){
          head_ref=head_ref->next;
          head_ref->prev=NULL;
          return head_ref;
      }
      int i=1;
      while(temp->next!=NULL){
          if(i==x){
              temp->prev->next=temp->next;
              temp->next->prev=temp->prev;
              return head_ref;
          }
          
          temp=temp->next;
          i++;
      }
      if (x == i) {
        temp->prev->next = NULL;
        temp->prev = NULL;
    }
      return head_ref;
}