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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // merge two linked lists

        // l1 and l2

        // if list 1 == null , return list 2

        if (list1 == NULL) {
            return list2;
        }

        if (list2 == NULL) {
            return list1;
        }

        ListNode* dummy = new ListNode(INT_MAX);

        ListNode* temp = dummy;

        while (list1 != NULL && list2 != NULL) {
            // check the value
            if (list1->val <= list2->val) {
                dummy->next = list1;
                dummy = list1;
                list1 = list1->next;
            } else {
                dummy->next = list2;
                dummy = list2;
                list2 = list2->next;
            }
        }

        if (list1 != NULL) {
            dummy->next = list1;
            // list1 = list1->next;
        }

        if (list2 != NULL) {
            dummy->next = list2;
            // list2 = list2->next;
        }

        return temp->next;
    }
};