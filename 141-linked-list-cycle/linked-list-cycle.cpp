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

        if((head  == NULL)  || (head -> next == NULL)){
            return false;
        }


        struct ListNode* temp = head;
        struct ListNode* prev = NULL;

        set<struct ListNode* > a;
        

int c = 0;

        while(temp != NULL){
            prev = temp ;
            a.insert(prev);
            c++ ;
            if(a.size() != c){
                return true;
            }
      
            temp = temp -> next;

        }
        return false;

    }
};