// problem link
// https://leetcode.com/problems/merge-two-sorted-lists/description/


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
        map<int, int> mp;
        vector<int> arr;

        ListNode* temp = list1;

        while(temp != nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        temp = list2;

        while(temp != nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        sort(arr.begin(), arr.end());

        ListNode* head = new ListNode(-99);
        ListNode* last = head;

        for(int i : arr){
            ListNode* nn = new ListNode(i);
            last->next = nn;
            last = nn;
        }

        return head->next;

    }
};
