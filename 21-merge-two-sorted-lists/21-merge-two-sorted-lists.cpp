/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        struct ListNode* res = new(struct ListNode);
        struct ListNode* res_ptr = res;
        
        if(list1 == NULL)
            return list2;
        else if(list2 == NULL)
            return list1;
        
        while(list1 != NULL && list2 != NULL){
            
            if(list1->val < list2->val){
                
                res_ptr->next = list1;
                list1 = list1->next;
                res_ptr = res_ptr->next;

            }
            else if (list1->val >= list2->val){
                
                res_ptr->next = list2;
                list2 = list2->next;
                res_ptr = res_ptr->next;
            
            }
            
        }
        
        if(list1 != NULL)
            res_ptr->next = list1;
        else if (list2 != NULL)
            res_ptr->next = list2;
        
        return res->next;
    }
};