/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {

    struct ListNode* temp = head;
    int c = 0;
    while(temp != NULL){
        temp = temp -> next;
        c++;
    }

    int mid = ((c/2) + 1);
    if(c == 1){
        return head;
    }

    struct  ListNode* prev = NULL;
    while((mid -1)> 0){
        prev = head;
        head = head -> next;
        mid -- ;
    }

    prev -> next = NULL;

    return head;


    
}