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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
 		ListNode *temp1 = headA;
 		ListNode *temp2 = headB;
 		int count1=0,count2=1;
 		while(temp1 != NULL) {
 			++count1;
 			temp1 = temp1->next;
 		}

 		while(temp2 != NULL) {
 			++count2;
 			temp2 = temp2->next;
 		}

 		int movesteps = 0;
 		temp1 = headA;
 		temp2 = headB;
 		if(cout1 > count2) {
 			movesteps = count1 - count2;
 			while(--movesteps)
 				temp1 = temp1->next;
 		}

 		if(count2 < count1) {
 			movesteps = count2 - count1;
 			while(--movesteps)
 			temp2 = temp2->next;
 		}

 		while(temp1!= NULL || temp2 != NULL) {

 			if(temp1 = temp2)
 				return temp1;

 			temp1 = temp1->next;
 			tepm2 = temp2->next;

 		}


  		return NULL;
        
    }
};		