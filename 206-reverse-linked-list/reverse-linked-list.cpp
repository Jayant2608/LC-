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

    ListNode* PreviousNode(ListNode* temp , ListNode* a){

        struct ListNode* r = a;
        while(r-> next != temp)
        {
            r = r-> next;
        }
        return r;
    }

public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){ //no node
            return NULL;
        }

        if(head -> next == NULL){ // 1 node
            return head;
        }

        struct ListNode* temp = head;
        struct ListNode* a = head;

        while(temp -> next != NULL){
            temp = temp -> next;
        } //temp points to last node

         struct ListNode* result = temp;


         while(temp != head){
            struct ListNode* prev = PreviousNode(temp , a);
            temp -> next = prev;
            
            prev -> next = NULL; //

            temp = prev;
         }

         return result;


        
    }
};