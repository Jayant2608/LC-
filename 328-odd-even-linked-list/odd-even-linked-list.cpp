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
    ListNode* oddEvenList(ListNode* head) {

     //optimised way

     if(head == NULL || head -> next == NULL){
        return head;
     }

     struct ListNode* first = head;
     struct ListNode* second = head -> next;
     struct ListNode* store = second;

     while(second != NULL){
        first ->next = second -> next;
        if(second -> next != NULL){
        second -> next = second->next->next;}

if(first -> next != NULL){
        first = first -> next;}

        second = second -> next;
        

     }
     first -> next = store;

     return head;



    }
};