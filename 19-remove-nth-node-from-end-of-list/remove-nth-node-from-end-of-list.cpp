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

        //striver optimised way using slow and fast pointers 
        //by using this we don't first need to calc number of nodes in a LL

        struct ListNode* fast = head;

        for(int i = 0;i< n;i++){
            fast = fast -> next; // we do this to prevent counting number of nodes of LL
        }

        struct ListNode* slow = head;

if(fast == NULL){ //edge case
            return head -> next;
        }

        while(fast->next != NULL){
            slow = slow -> next;
            fast = fast -> next;
        }

        //slow now points before the node to be deleted

        

        struct ListNode* del = slow -> next;
        slow -> next = slow -> next->next;
        delete (del);

        return head;

        
    }
};