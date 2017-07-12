/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
                
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode* result = malloc(sizeof(struct ListNode));
    
    struct ListNode* tmp = result;
    struct ListNode* a = l1;
    struct ListNode* b = l2;
    int carry = 0;
    
    while(a!=NULL || b!=NULL){

        if(a != NULL && b!= NULL){
            struct ListNode* sum = (struct ListNode*)malloc(sizeof(struct ListNode));
            sum->val = (a->val + b->val + carry) % 10;
            sum->next = NULL;
            carry = (a->val + b->val + carry) / 10;
            tmp->next = sum;
            tmp = tmp->next;
            a = a->next;
            b = b->next;
        }

        else if(a != NULL){//b == NULL
            struct ListNode* sum = (struct ListNode*)malloc(sizeof(struct ListNode));
            sum->val = (a->val + carry) % 10;
            sum->next = NULL;
            carry = (a->val + carry) / 10;
            tmp->next = sum;
            tmp = tmp->next;
            a = a->next;
        }

        else if(b != NULL){//a == NULL
            struct ListNode* sum = (struct ListNode*)malloc(sizeof(struct ListNode));
            sum->val = (b->val + carry) % 10;
            sum->next = NULL;
            carry = (b->val + carry) / 10;
            tmp->next = sum;
            tmp = tmp->next;
            b = b->next;
        }

    }

    if(carry > 0){
        struct ListNode* sum = (struct ListNode*)malloc(sizeof(struct ListNode));
        sum->val = 1;
        sum->next = NULL;
        tmp->next = sum;
    }

    return result->next;
}