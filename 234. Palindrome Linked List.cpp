234. Palindrome Linked List

https://leetcode.com/problems/palindrome-linked-list/

solution:

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
    
    bool isPalindrome(ListNode* head) {
        string s="";
        while(head!=NULL){
            s+=to_string(head->val);
            head=head->next;
        }
        if (s == string(s.rbegin(), s.rend())) {
            return true;
        }
        return false;
    }
};
