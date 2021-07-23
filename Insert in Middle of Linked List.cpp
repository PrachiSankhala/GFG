//Insert in Middle of Linked List 
//https://practice.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=-1&page=1&query=category[]Linked%20Listdifficulty[]-1page1category[]Linked%20List#
Node* insertInMiddle(Node* head, int x)
{
    Node *t=head;
    int i=0,mid;
    while(t!=NULL){
        t=t->next;
        i++;
    }
    Node *temp=head;
    Node *te=new Node(x);
    i%2==0?mid=(i/2)-1:mid=i/2;
    for(int j=0;j<mid;j++)
        temp=temp->next;
    te->next=temp->next;
    temp->next=te;
    return head;
}