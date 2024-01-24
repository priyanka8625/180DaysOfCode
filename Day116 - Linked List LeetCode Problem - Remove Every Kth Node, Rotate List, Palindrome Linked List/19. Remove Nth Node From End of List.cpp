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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp=head;
        while(temp){
            temp = temp->next;
            count++;
        }
        count -= n;
        if(count == 0){
            //it means delete firs node
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        ListNode *prev=NULL, *curr=head;
        while(count){
            prev = curr;
            curr = curr->next;
            count--;
        }
        prev->next = curr->next;
        delete curr;
        return head;
    }
};