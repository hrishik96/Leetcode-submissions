/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    
    struct ListNode* temp=head;
    struct ListNode* dupl=NULL;

    while(temp!=NULL && temp->next!=NULL){
        
        if(temp->val==temp->next->val){
            dupl=temp->next;
            temp->next=temp->next->next;
            free(dupl);
        }
        else{
            temp=temp->next;
        }

    }
    return head;
    

}