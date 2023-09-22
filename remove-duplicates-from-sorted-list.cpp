#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printLinkedList(ListNode *head)
{
    ListNode *current = head;
    while (current != nullptr)
    {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

ListNode *deleteDuplicates(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *temp = head;
    while (temp && temp->next != NULL)
    {
        if (temp->val == temp->next->val)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
        // printLinkedList(head);  debug
    }
    return head;
}

int main()
{
    // create
    ListNode *node1 = new ListNode(1);
    ListNode *node2 = new ListNode(2);
    ListNode *node3 = new ListNode(2);
    ListNode *node4 = new ListNode(3);
    ListNode *node5 = new ListNode(3);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = nullptr;

    ListNode *head = node1;

    deleteDuplicates(head); // func
    // printLinkedList(head); debug
}