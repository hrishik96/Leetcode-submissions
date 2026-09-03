/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* temp=head; 
    int c=1;
    while(temp!=NULL){
        c++;
        temp=temp->next;

    }
int k;
    if(!c%2){
        k=(c/2)+1;
    }
    else{
        k= (c+1)/2;
    }

   for(int i=1;i!=k;i++){
        head=head->next;
        
    }
    return head;
    
}