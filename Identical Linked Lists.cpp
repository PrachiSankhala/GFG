//Identical Linked Lists 
//https://practice.geeksforgeeks.org/problems/identical-linked-lists/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=-1&page=1&query=category[]Linked%20Listdifficulty[]-1page1category[]Linked%20List#
bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    while(head1!=NULL and head2!=NULL){
        if(head1->data!=head2->data){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    if(head1!=NULL or head2!=NULL){
        return false;
    }
    return true;
}