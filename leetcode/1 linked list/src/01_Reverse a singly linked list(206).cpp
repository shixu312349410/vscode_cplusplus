
/*Reverse a singly linked list.

Example:

Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode
{
    int val;
    ListNode * next;
    ListNode(int x):val(x),next(nullptr){}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * new_head = nullptr; //指向新链表头节点的指针
        while(head){

            ListNode * next = head->next; //备份head->next
            head->next  = new_head;//更新head->next
            new_head = head;//移动new_head
            head = next; //遍历链表
        }
        return new_head; //返回链表头节点

    }
};