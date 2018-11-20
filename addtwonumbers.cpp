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
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

            int a = 0,b = 0;
            int carry = 0;
            int sum = 0;


            if(l1 == NULL)	
                return l2;
            if(l2 == NULL)	
                return l1;
            if(l1 == NULL && l2 == NULL)	
                return NULL;
            sum = l1->val + l2->val;
            l1 = l1->next; 
            l2 =l2->next;

            if(sum > 9)	{
                carry = sum / 10;
                sum = sum % 10;
            }
            else
                carry = 0;

            ListNode *head;
            ListNode *sumnode = new ListNode(sum);
            ListNode *temp = new ListNode(sum);

            head = sumnode;	


            while( l1 != NULL || l2 != NULL || (carry > 0))	{
                int sum = (l1? l1->val:0) + (l2? l2->val:0) + carry;
                cout<<sum;
                sum = sum % 10;
                carry = sum / 
                if(sum > 9)
                {
                    carry = sum / 10;
                    
                }
                else
                    carry = 0;

                ListNode *temp = new ListNode(sum);
                sumnode->next =temp;
                sumnode =sumnode->next;
                l1 = (l1?l1->next:l1);
                l2 =(l2?l2->next:l2);

            }

        return head;
        }
    };