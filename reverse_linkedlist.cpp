/*Given the head of a singly linked list, 
reverse the list, and return the reversed list.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;  //pointer to store address of next node
 *     ListNode() : val(0), next(nullptr) {}  creating node without value or position
 *     ListNode(int x) : val(x), next(nullptr) {}  creating node with only value
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}  creating node with value and position both
 * };
 */
#include <iostream>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;  //pointer to store address of next node
 };

ListNode* head = new ListNode();  //global variable

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* next_node;

        while(current!=NULL)
        {
            next_node = current->next;
            current->next = prev;
            prev = current;
            current = next_node;
        }
        return prev;
    }

    void Insert(int value)
    {
        ListNode* current = head;
        ListNode* temp = new ListNode();
        temp->val = value;
        if (head==NULL)
        {
            head = temp;
            temp = NULL;
            return;
        }

        while(current->next!=NULL)
        {
            current = current->next;
        }
        current->next = temp;
        temp->next = NULL;
        return;
    }

    void Print(ListNode* head)
    {
        ListNode* current = head;
        while (current!=NULL)
        {
            if(current->next==NULL)
            cout<<current->val<<" "<<endl;

            else
            cout<<current->val<<" -> ";

            current = current->next;
        }
    }
};

int main()
{
    head = NULL;
    int listSize, value;
    cout<<"Enter number of nodes in the linked list: ";
    cin>>listSize;

    Solution list_operate;

    for (int i=0 ; i<listSize ; i++)
    {
        cout<<"Enter value of node "<<(i+1)<<": ";
        cin>>value;
        list_operate.Insert(value);
    }

    cout<<"Entered Linked List: "<<endl;
    list_operate.Print(head);

    head = list_operate.reverseList(head);

    cout<<"Reversed Linked List: "<<endl;
    list_operate.Print(head);
    return 0;
}
//run using: 
//g++ reverse_linkedlist.cpp -o reverse_linkedlist
//./reverse_linkedlist