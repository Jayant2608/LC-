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

        //striver method using fast and slow pointers

        struct ListNode* slow = head;
        struct ListNode* fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast->next->next;

            if(slow == fast){
                return true;
            }
        }

        return false;



    }
};