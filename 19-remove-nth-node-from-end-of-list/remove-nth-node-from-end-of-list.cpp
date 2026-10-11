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

        if(head -> next == NULL){
            return NULL;
        }

        

        struct ListNode* mover = head;
        int c = 0;

        while(mover != NULL){
            mover = mover -> next;
            c++ ;
        }
        mover = head;

        int k = (c-n) + 1; //kth node from starting

        if(k == 1){
            head = mover -> next;
            delete mover;
            return head;
        }

        struct ListNode* prev = NULL;


        while((k-1)>0){
            prev = mover;
            mover = mover -> next;
            k --;

        }

        struct ListNode* n1 = mover -> next;
        delete mover;
        prev -> next = n1;
        return head;
        
    }
};