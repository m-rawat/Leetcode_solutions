876. Middle of the Linked List

https://leetcode.com/problems/middle-of-the-linked-list/

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
    
    int length(ListNode* head){
        int count=0;
        while(head!=NULL){
            count++;
            head=head->next;
        }
        return count;
    }
    
    ListNode* middleNode(ListNode* head) {
        int len=length(head);
        len=(len/2);
        len++;
        int jump=1;
            while(jump<=len-1){
                head=head->next;
                jump++;
            }
        return head;
    }
};
