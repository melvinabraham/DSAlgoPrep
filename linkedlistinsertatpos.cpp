// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
listNode* insert_at_position( listNode* head, int data,int pos)
{
    
    if(head == NULL)
        return head;
    
    listNode *next;
    listNode *temp = head;
    listNode *var;
    var->value = data;
    var->next = NULL;
    int i = 1;
    
    if(pos == 1) {
        var->next = head;
        return var;
    }

    while(temp != NULL) {
        
        if(i + 1 = pos) {
            next = temp->next;
            temp->next = var;
            temp = temp->next;
            temp->next = next;
            break;
        }
        head = head->next;
        ++i;
    }

    return head;

    
}