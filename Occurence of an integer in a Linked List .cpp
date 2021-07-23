//Occurence of an integer in a Linked List 
//https://practice.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=0&page=1&query=category[]Linked%20Listdifficulty[]0page1category[]Linked%20List#
    int count(struct node* head, int search_for)
    {
    //add your code here
    int c=0;
    while(head->next!=NULL){
        if(head->data==search_for)
            c++;
        head=head->next;
    }
    if(head->data==search_for)
        c++;
    return c;
    }