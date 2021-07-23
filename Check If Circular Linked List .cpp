//Check If Circular Linked List 
//https://practice.geeksforgeeks.org/problems/circular-linked-list/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=-1&page=1&query=category[]Linked%20Listdifficulty[]-1page1category[]Linked%20List#

bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL){
       return 0;
   }
   Node *temp=head;
   head=head->next;
   while(head!=NULL){
       if(head->next==temp){
           return 1;
       }
       head=head->next;
   }
   return 0;
}