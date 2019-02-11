/* Given a non-empty, singly linked list with head node head, return a middle node of linked list.

If there are two middle nodes, return the second middle node.*/

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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        int cap = 0; 
        ListNode* temp = head ;
        while(temp -> next != NULL){
            temp = temp -> next ; 
            count++;
        }
        if(count%2 != 0){
            count++;
        }
        temp = head ;
        while(cap<(count/2)){
            temp = temp -> next; 
            cap++;
        }
        return temp ; 
    }
};
