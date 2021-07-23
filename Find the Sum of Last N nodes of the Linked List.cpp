//Find the Sum of Last N nodes of the Linked List 

//https://practice.geeksforgeeks.org/problems/find-the-sum-of-last-n-nodes-of-the-linked-list/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=-1&page=1&query=category[]Linked%20Listdifficulty[]-1page1category[]Linked%20List#
int sumOfLastN_Nodes(struct Node* head, int n)
{
      // Code here
      Node *t=head;
      int sum=0,i=0;
      while(t!=NULL){
          t=t->next;
          i++;
      }
      int j=i-n,k=0;
      while(head!=NULL){
          if(j<=k){
              sum+=head->data;
          }
          k++;
          head=head->next;
      }
      return sum;
}