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
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode *iterator = head;
        while(iterator != nullptr){
            length += 1;
            iterator = iterator->next;
        }
        cout << length << endl;
        ListNode* j = head;
        for(int i = 0 ; i < length / 2 ; i++){
            if(j->next != nullptr)
                j = j->next;
        }
        return j;
    }
};
