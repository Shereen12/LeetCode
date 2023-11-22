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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr)
            return head;
        int total = 0;
        ListNode* node = head;
        
        while(node->next != nullptr){
            total += 1;
            node = node->next;
        }
        
        int middle = total / 2;
        
        int n = total;
        ListNode* current = head;
        int i = 0;
        while(i <= middle){

            ListNode* node = head;
            int j = 0;
            while(j < n){
                node = node->next;
                j += 1;
            }
            cout << current->val << "  " << node->val << endl;

            int temp = current->val;
            current->val = node->val;
            node->val = temp;
            
            current = current->next;
            n -= 1;
            i += 1;
        }
    
        return head;
    }
};
