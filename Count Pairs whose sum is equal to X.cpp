//Count Pairs whose sum is equal to X 
//https://practice.geeksforgeeks.org/problems/count-pairs-whose-sum-is-equal-to-x/1/?category[]=Linked%20List&category[]=Linked%20List&difficulty[]=0&page=1&query=category[]Linked%20Listdifficulty[]0page1category[]Linked%20List#
int countPairs(struct Node* head1, struct Node* head2, int x) {
        unordered_set<int> s;
        while(head1!=NULL){
            s.insert(head1->data);
            head1=head1->next;
        }
        int c=0;
        while(head2!=NULL){
            if(s.find(x-head2->data)!=s.end())
                c++;
            head2=head2->next;
        }
        return c;
    }