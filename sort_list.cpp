#include <iostream>
#include <vector>
#include <algorithm>
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
    ListNode* sortList(ListNode* head) {
        
        vector<int> values;
        ListNode* current = head;
        while (current!=NULL)
        {
            values.push_back(current->val);
            current = current->next;
        }

        sort(values.begin(), values.end());
        int len = values.size();

        current = head;
        for (int i=0 ; i<len ; i++)
        {
            current->val = values[i];
            current = current->next;
        }
        return head;
    }  

    ListNode* insert(ListNode* head_new, int value)
    {
        ListNode* temp = new ListNode(value);
        if (head_new==NULL)
        {
            head_new = temp;
            temp->next = NULL;
            return head_new;
        }

        ListNode* current2 = head_new;
        while (current2->next!=NULL)
        {
            current2 = current2->next;
        }

        current2->next = temp;
        temp->next=NULL;
        return head_new;
    }
    
    void Print(ListNode* head)
    {
        ListNode* current3 = head;
        while(current3!=NULL)
        {
            cout<<current3->val<<" ";
            current3 = current3->next;
        }
        cout<<endl;
    }
};

int main() {
	int n, data;
	ListNode* head = NULL;
	cout<<"Enter size of Linked List: ";
	cin>>n;
	
	Solution list;
	cout<<"Enter elements of Linked List: ";
	for (int i=0 ; i<n ; i++)
	{
	    cin>>data;
	    head = list.insert(head, data);
	}
	
	cout<<"Original List: ";
	list.Print(head);
	
	ListNode* head_new = list.sortList(head);
	
	cout<<"Sorted List: ";
	list.Print(head_new);
	
	return 0;
}