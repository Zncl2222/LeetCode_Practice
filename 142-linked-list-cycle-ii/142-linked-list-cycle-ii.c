/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    
    if(!head || !head->next)
        return NULL;
    
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    
    while(fast && fast->next){
        
        fast = fast->next->next;
        slow = slow->next;
        
        if(fast == slow)
            break;
    }
    
    if(fast != slow)
        return NULL;
    
    slow = head;
    
    while(fast != slow){
        
        fast = fast->next;
        slow = slow->next;
    
    }
    
    return fast;
}