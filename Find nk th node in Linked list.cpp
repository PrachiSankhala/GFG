//Find n/k th node in Linked list 
//https://practice.geeksforgeeks.org/problems/find-nk-th-node-in-linked-list/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=-1&page=1&query=category[]Linked%20Listdifficulty[]-1page1category[]Linked%20List#
int fractional_node(struct Node *head, int k)
{
    Node *temp=head;
    int c=0;
    while(temp->next!=NULL){
        temp=temp->next;
        c++;
    }
    int mid =c/k;
    mid;
    while(mid--){
        head=head->next;
    }
    return head->data;
}