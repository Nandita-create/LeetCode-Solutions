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
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

ListNode* head;

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* current = head;
        ListNode* temp = head;
        if (head==NULL)
        return head;

        while(current->next!=NULL)
        {
            temp = current->next;
            if (temp->val==val)
            {
                current->next = current->next->next;
                //free(temp);
            }
            current = current->next;
            //current = temp->next;
        }
        if (current->val==val)
        {
            temp = current;
            current->next = NULL;
            free(temp);
        }
        return head;
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
    int listSize, value, del_val;
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

    cout<<"Enter value to be deleted: ";
    cin>>del_val;

    head = list_operate.removeElements(head, del_val);

    cout<<"Modified Linked List: "<<endl;
    list_operate.Print(head);
    return 0;
}
//run using: 
//g++ delete_value.cpp -o delete_value
//./delete_value