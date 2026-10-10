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
        if(head == NULL){ //no node
            return NULL;
        }

        if(head -> next == NULL){ // 1 node
            return head;
        }

        struct ListNode* temp = head;
        struct ListNode* prev = NULL;
        struct ListNode* mover = head-> next;

        while(temp != NULL){
            temp -> next = prev;
            prev = temp;
            temp = mover;
           
           if(mover == NULL){
            break;
           }
            mover = mover->next;
        }

        return prev;



    }
};