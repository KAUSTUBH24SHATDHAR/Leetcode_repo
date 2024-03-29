class Solution {
public:
    ListNode* mergePos(ListNode* node, int count){
        while(count--)
            node = node->next;
        return node;
    }

    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        // Step 1 - Find node before removal
        int count = 1;
        ListNode *temp = list1;
        while(count++ < a){
            temp = temp->next;
        }

        // Step 2 - Find node to join after removal
        ListNode *pos = mergePos(temp->next, b-a+1);

        // Step 3 - Merge list2 at the removed part of list1
        temp->next = list2;
        ListNode *list2Tail = list2;
        // find tail of list2 to later merge with list1
        while(list2Tail->next != NULL){
            list2Tail = list2Tail->next;
        }
        
        // Step 4 - Merge list2 with the list1 node after removal
        list2Tail->next = pos;
        return list1;
    }
};