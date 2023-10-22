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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;
        int i = 0;
        ListNode* second = head;
        while(i <= n - 1){
            if(second->next == nullptr)
                second = nullptr;
            else
                second = second->next;
            i += 1;
        }
        if(second == nullptr){
            head = head->next;
        }
        else{
            while(second->next != nullptr){
                first = first->next;
                second = second->next;
            }

            if(first->next != nullptr)
                first->next = first->next->next;
            else{
                head = nullptr;
            }
        }
        return head;
    }
};
