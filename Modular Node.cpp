//Modular Node 
//https://practice.geeksforgeeks.org/problems/modular-node/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=-1&page=1&query=category[]Linked%20Listdifficulty[]-1page1category[]Linked%20List#
int modularNode(Node* head, int k)
{
	// Code here
	int ans=-1,i=1;
	while(head!=NULL){
	    if(i%k==0){
	        ans=head->data;
	    }
	    head=head->next;
	    i++;
	}
	return ans;
}