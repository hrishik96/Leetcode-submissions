/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    
    while(head!=NULL && head->val==val){
        struct ListNode* del=head;
        head=head->next;
        free(del);
    }
    struct ListNode* temp=head;

    while(temp!=NULL && temp->next!=NULL){
        if(temp->next->val==val){
            struct ListNode* del=temp->next;
            temp->next=del->next;
            free(del);
        }
        else{
            temp=temp->next;
        }
    }
    return head;
   
}