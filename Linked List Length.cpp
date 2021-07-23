//Linked List Length Even or Odd? 
//https://practice.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=-1&page=1&query=category[]Linked%20Listdifficulty[]-1page1category[]Linked%20List#

int isLengthEvenOrOdd(struct Node* head)
{
     //Code here
     int i=0;
     while(head!=NULL){
         head=head->next;
         i++;
     }
     if(i%2==0){
         return 0;
     }
     return 1;
}