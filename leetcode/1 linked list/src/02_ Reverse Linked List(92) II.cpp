/*Reverse a linked list from position m to n. Do it in one-pass.

Note: 1 ≤ m ≤ n ≤ length of list.

Example:

Input: 1->2->3->4->5->NULL, m = 2, n = 4
Output: 1->4->3->2->5->NULL
*/



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
 };

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {

        ListNode * preh_head = nullptr;
        while(head&&--m){
            preh_head = head;
            head = head->next;
        }
        ListNode* modify_list_tail = head;//
        int change_len = n-m+1;
        ListNode* new_head = nullptr;
        while(head && change_len--){ // 和上一道题目的链表逆置的代码一样
            ListNode* next = head->next;
            head->next = new_head;
            new_head = head;
            head = next;
        }
        
    }
};
