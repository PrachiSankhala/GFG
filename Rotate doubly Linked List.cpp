//Rotate doubly Linked List 
//https://practice.geeksforgeeks.org/problems/rotate-doubly-linked-list-by-p-nodes/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=0&page=1&query=category[]Linked%20Listdifficulty[]0page1category[]Linked%20List#
struct node*update(struct node*start,int p)
{
    //Add your code here
    node *temp=start;
    while(temp->next!=NULL)
        temp=temp->next;
    start->prev=temp;
    temp->next=start;
    while(p--){
        start=start->next;
    }
    start->prev->next=NULL;
    start->prev=NULL;
    return start;
}