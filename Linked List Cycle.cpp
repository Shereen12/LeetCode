/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr)
            return false;
        while(true){
            if(head->val == 1000006){
                return true;
            }
        
            head->val = 1000006;
            if(head->next != nullptr)
                head= head->next;
            else
                return false;
        }
    }
};
