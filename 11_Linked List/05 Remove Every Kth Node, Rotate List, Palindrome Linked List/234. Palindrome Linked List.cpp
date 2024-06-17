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
        if(head->next == NULL)
            return true;
            
        //count the no of nodes in list so that we can divide it in two parts for comparison
        int count=0;
        ListNode *temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        
        //get the mid point for division
        count /= 2;
        ListNode* prev=NULL, *curr=head;
        while(count--){
            prev = curr;
            curr=curr->next;
        }
        //now prev will point to count'th node and curr will point to the first node of 2nd part
        //break the link between 1st and 2nd part of the list
        prev->next = NULL;
        
        //reverse the second part now so that we can compare the two parts easily while moving forward
        ListNode *front = NULL;
        prev = NULL;
        while(curr){
            front = curr->next;
            curr->next=prev;
            prev = curr;
            curr = front;
        }
        //once curr becomes null, prev will point to the first node of reversed list
        //now compare the two parts 
        ListNode* head1 = head, *head2= prev;
        while(head1){
            //we will continuw loop up untill head1 exist because head2 can contain one extra node in case when given list is of odd length
            if(head1->val != head2->val)
                return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        //if all the values in both the parts are equal 
        return true;
    }
};