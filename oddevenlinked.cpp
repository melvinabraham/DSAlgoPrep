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
    ListNode* oddEvenList(ListNode* head) {

    	if(head == NULL)
    		return NULL;
    	if(head->next == NULL || head->next->next == NULL)
    		return head;

    	ListNode *c1 = head;
    	ListNode *c2 = head->next;
    	ListNode *temp = c1;
    	ListNode *node = temp;

    	while(c1->next != NULL && c1->next->next != NULL) {
    		temp->next = c1->next->next;
    		temp = temp->next;
    		c1 = c1->next->next;
    	}

    	temp->next = c2;
    	temp = temp->next;

    	while(c2->next != NULL && c2->next->next != NULL) {
    		temp->next = c2->next->next;
    		temp = temp->next
    		c2 = c2->next->next;
    	}
        
        if(temp->next != NULL)
        	temp->next = NULL;

        return node;

    }
};