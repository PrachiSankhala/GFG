//Delete Alternate Nodes 
//https://practice.geeksforgeeks.org/problems/delete-alternate-nodes/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=-1&page=1&query=category[]Linked%20Listdifficulty[]-1page1category[]Linked%20List#

void deleteAlt(struct Node *head){
    if(head==NULL or head->next==NULL)
        return ;
    Node *h=head;
    while(h!=NULL and h->next!=NULL){
        h->next=h->next->next;
        h=h->next;
    }
    if(h!=NULL){
        h->next=NULL;
    }
}
