class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode result(0), *ptr = &result;
        int carry = 0;
        while (l1 or l2 or carry)
        { 
            result.val = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            ptr->next = new ListNode (result.val % 10);
            carry = (result.val) / 10;
            if(l1) {l1=l1->next;}
            if(l2) {l2=l2->next;}
            ptr=ptr->next;
        }  
        return result.next;
       
    }
};
