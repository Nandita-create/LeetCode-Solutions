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
    ListNode* head;

public:

Solution(){
    head = nullptr;
}
    ListNode* middleNode(ListNode* head) {
        ListNode* current = head;
        int count = 0;
        while(current!=NULL)
        {
            count++;
            current = current->next;
        }
        int mid = (count/2) + 1;
        ListNode* temp = head;
        count=0;
        while (count!=mid-1)
        {
            count++;
            temp = temp->next;
        }
        ListNode* head2 = temp;
        return head2;
    }

    ListNode* Insert(int value)
    {
        ListNode* current = head;
        ListNode* temp = new ListNode(value);

        if (head==NULL)
        {
            head = temp;
            temp = NULL;
            return head;
        }

        while(current->next!=NULL)
        {
            current = current->next;
        }
        current->next = temp;
        temp->next = NULL;
        return head;
    }

    void Print(ListNode* result)
    {
        ListNode* current = result;
        while(current!=NULL)
        {
            if (current->next==NULL)
            {
                cout<<current->val<<" ";
            }
            else
            {
                cout<<current->val<<" -> ";
            }
            current = current->next;
        }
        cout<<endl;
    }

    ListNode* getHead()
    {
        return head;
    }
};

int main()
{
    Solution solution;
    
    int size, value;
    cout<<"Enter size of linkedlist: ";
    cin>>size;

    for (int i=0 ; i<size ; i++)
    {
        cout<<"Enter element "<<(i+1)<<": ";
        cin>>value;
        solution.Insert(value);
    }

    ListNode* result = solution.middleNode(solution.getHead());
    solution.Print(result);
    return 0;
}
//run using: 
//g++ middle_linkedlist.cpp -o middle_linkedlist
//./middle_linkedlist