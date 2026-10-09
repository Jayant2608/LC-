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
    ListNode* sortList(ListNode* head) {
        
        if(head == NULL){
            return NULL;
        }

        if(head -> next == NULL){
            return head;
        }

        struct ListNode* temp = head;


        vector<int> list;

        while(temp != NULL){
            list.emplace_back(temp -> val);

      
            temp = temp -> next;
            

        }

        sort(list.begin(),list.end());
        int n = list.size();

        struct ListNode* mover = head;
        
        for(int i = 0;i< n;i++){ //we don't create new nodes instead we just overwrite the old ones with the sorted values
        
            mover -> val = list[i];
            mover = mover -> next ;
            

        }

        return head;

      
    }
};