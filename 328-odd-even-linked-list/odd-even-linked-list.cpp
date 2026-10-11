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

        if(head == NULL){ //0 node
            return NULL;
        }

        if(head -> next == NULL || head->next->next == NULL){ //1 or 2 nodes
            return head;
        }

        int c = 0;
        struct ListNode* mover = head;

        while(mover != NULL){
            mover = mover -> next;
            c++;
        }

        struct ListNode* temp = head->next->next;



struct ListNode* q = head->next ;

vector<int> v;

struct ListNode* even = head->next ;

while(even != NULL){
    v.emplace_back(even -> val);

    if((even -> next == NULL) || (even->next->next == NULL)){
        break;
    }
    even = even ->next->next;
}



while((temp!= NULL)){
    
    int a = temp-> val;
    temp -> val = q -> val;
    q-> val = a;

     q = q-> next;

    if(temp -> next == NULL ||  (temp->next->next == NULL)){
        break;
    }

    temp = temp ->next-> next;
   

}

   for(int i = 0;i<v.size();i++){

    if(q != NULL){
    q->val = v[i];
    q = q-> next;
    }

   }
    return head ;

    }
};