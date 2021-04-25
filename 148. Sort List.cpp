148. Sort List

https://leetcode.com/problems/sort-list/

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
    
    ListNode* middle(ListNode*head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *slow=head;
        ListNode *fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }

    ListNode * merge(ListNode*head1,ListNode*head2){
        if(head1==NULL){
            return head2;
        }
        if(head2==NULL){
            return head1;
        }
        ListNode *c;
        if(head1->val<head2->val){
            c=head1;
            c->next=merge(head1->next,head2);
        }
        else{
            c=head2;
            c->next=merge(head1,head2->next);
        }
        return c;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        //Divide
        ListNode*mid=middle(head);
        ListNode*temp1=head;
        ListNode*temp2=mid->next;
        mid->next=NULL;

        //sort
        temp1=sortList(temp1);
        temp2=sortList(temp2);

        //merge
        ListNode*ans=merge(temp1,temp2);
        return ans;
    }
};
