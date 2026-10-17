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

struct ListNode* reverse(ListNode* head){

    if(head == NULL || head -> next == NULL){
        return head;
    }

    struct ListNode* newhead = reverse(head -> next);

    struct ListNode* front = head -> next;
    front -> next = head;
    head -> next = NULL;
    return newhead;

}
public:
    bool isPalindrome(ListNode* head) {

       if(head == NULL || head -> next == NULL)return true;

       struct ListNode* slow = head;
              struct ListNode* fast = head;

        while(fast ->next != NULL && fast ->next->next != NULL){
            slow = slow -> next;
            fast = fast->next->next;
        }

        struct ListNode* newhead = reverse(slow -> next); //reversing the after middle part using recursion

        struct ListNode* first = head;
        struct ListNode* second = newhead;

        while(second != NULL){
            if(first->val != second->val){
                reverse(newhead);
                return false;
            }

            first = first -> next;
            second = second-> next;
        }

        reverse(newhead);
        return true;

   
    }
};