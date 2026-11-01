#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == NULL)
            return head;

        ListNode* current = head;
        vector<int> values;
        int value = -1;

        while (current != NULL)
        {
            if (current->next != NULL && current->val == current->next->val)
            {
                value = current->val;

                while (current != NULL && current->val == value)
                {
                    current = current->next;
                }
            }
            else
            {
                values.push_back(current->val);
                current = current->next;
            }
        }

        if (values.empty())
            return NULL;

        ListNode* head1 = new ListNode(values[0]);
        ListNode* current1 = head1;

        int element = 1;
        int len = values.size();

        while (element<len)
        {
            ListNode* copy = new ListNode(values[element]);
            current1->next = copy;
            current1 = current1->next;
            element++;
        }

        return head1;
    }

    ListNode* Insert(ListNode* head, int value)
    {
        ListNode* newNode = new ListNode();
        newNode->val = value;
         ListNode* current = head;
         while(current->next!=NULL)
         {
            current = current->next;
         }

         current->next = newNode;
         newNode->next = NULL;
         return head;
    }

    void Print(ListNode* head)
    {
        ListNode* current = head;
        while(current!=NULL)
        {
            cout<<current->val<<" ";
            current = current->next;
        }
        cout<<endl;
    }
};

int main()
{
    ListNode* head = NULL;
    int n, value;
    cout<<"Enter number of elements in the linked list: ";
    cin>>n;

    Solution sol;

    cout<<"Enter elements of linked list: ";
    for (int i=0 ; i<n ; i++)
    {
        cin>>value;
        head = sol.Insert(head, value);
    }
    cout<<"Original Linked List: "<<endl;
    sol.Print(head);

    ListNode* result = sol.deleteDuplicates(head);
    cout<<"Linked List with Duplicates Deleted: "<<endl;
    sol.Print(result);
    cout<<endl;

    return 0;
}