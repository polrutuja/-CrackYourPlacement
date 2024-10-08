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

    void solve(ListNode* list1, ListNode* list2){
        ListNode* curr1 = list1;
        ListNode* next1 = curr1 -> next;
        ListNode* curr2  = list2;
        ListNode* next2  = curr2 -> next;

        while(next1 != nullptr && curr2 != nullptr){
            if(curr2 -> val >= curr1 -> val && curr2 -> val <= next1 -> val){
                curr1 -> next = curr2;
                curr2 -> next = next1;
                curr1  = curr2;
                curr2 = next2;
                 if (curr2 != nullptr) next2 = curr2->next;
            } else {
                //curr1 and next1 ko aage badhana hai
                curr1 = next1;
                next1 = next1 -> next;

                if(next1==nullptr){
                    curr1 -> next = curr2;
                    return ;
                } 
            }
        }
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr){
            return list2;
        }

        if(list2 == nullptr){
            return list1;
        }

        if(list1->val <= list2->val){
            solve(list1, list2);
            return list1;
        }
        else {
            solve(list2, list1);
            return list2;
        }
          
    }
};
