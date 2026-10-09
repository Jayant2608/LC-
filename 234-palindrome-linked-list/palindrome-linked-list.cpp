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
    bool isPalindrome(ListNode* head) {
           if(head -> next == NULL){
        return true;
    }
    vector <int> v;
    
    struct ListNode* temp = head;
    while(temp != NULL){
        v.emplace_back(temp -> val);
        temp = temp -> next;
    }
    int n = v.size();


    int low = 0;
    int high = n-1;
    while(low<=high){
        if(v[low] == v[high]){
            low++ ;
            high -- ;
        }
        else{
            return false;
        }
    }
    return true;
    }
};