#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    // 直接使用原来的链表来进行移除节点操作
    ListNode *removeElements(ListNode *head, int val)
    {
        while (head != NULL && head->val == val)
        {
            ListNode *tmp = head;
            head = head->next;
            delete tmp;
        }
        ListNode *cur = head;
        while (cur != NULL && cur->next != NULL)
        {
            if (cur->next->val == val)
            {
                ListNode *tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            }
            else
            {
                cur = cur->next;
            }
        }
        return head;
    }
    ListNode *removeElements2(ListNode *head, int val)
    {
        ListNode *dummyHead = new ListNode(0); // 设置一个虚拟头结点
        dummyHead->next = head;                // 将虚拟头结点指向head，这样方面后面做删除操作
        ListNode *cur = dummyHead;
        while (cur->next != NULL)
        {
            if (cur->next->val == val)
            {
                ListNode *tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            }
            else
            {
                cur = cur->next;
            }
        }
        head = dummyHead->next;
        delete dummyHead;
        return head;
    }
};
int main()
{
    return 0;
}