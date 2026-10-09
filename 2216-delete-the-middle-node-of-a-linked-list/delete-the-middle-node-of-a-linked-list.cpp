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
    ListNode* deleteMiddle(ListNode* head) {

        if(head -> next == NULL){
            return NULL; //don't need to delete the head just return the NULL
        }

struct ListNode* temp = head;
        int c = 0;
        while(temp != NULL){
            temp = temp -> next ;
            c ++;
        }

        if(c == 2){
            delete head->next ;
            head -> next = NULL;
            return head;
        }

        if(c == 3){
            struct ListNode* a = head->next->next;
            delete head -> next;
            head -> next = a;
            return head;
        }

        temp = head;
        int mid = (c/2) - 1;

        while((mid) > 0){
            temp = temp -> next;
            mid -- ;

        }
struct ListNode* n1 = temp->next->next ;
delete (temp->next);

        temp -> next = n1;

        
        return head;



       


        
    }
};