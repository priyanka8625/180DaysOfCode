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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL)
            return head;
        int count = 0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        //make k <= count
        k = k%count;
        if(k==0)
        //no need to rotate
            return head;

        count -= k;
        ListNode *prev = NULL, *curr=head;
        while(count--){
            //reach out to kth node from end
            prev = curr;
            curr= curr->next;
        }
        //remove link between k-1 and kth node
        prev->next = NULL;
        //now reach to the last node and make it point to the first node in list to make a connection after rotation
        ListNode *tail = curr;
        while(tail->next!=NULL)
            tail = tail->next;
        tail->next = head;
        //make head equal to the kth node
        head = curr;
        return head;
    }
};