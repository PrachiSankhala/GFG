//Count nodes of linked list 
// https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=-1&page=1&query=category[]Linked%20Listdifficulty[]-1page1category[]Linked%20List#
class Solution
{
    public:
    int getCount(struct Node* head){
        int i=0;
        while(head!=NULL){
            head=head->next;
            i++;
        }
        return i;
    
    }
};