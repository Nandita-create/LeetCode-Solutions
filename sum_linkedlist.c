/*You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit.
Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
     int val;
     struct ListNode *next;
 };

void Print(struct ListNode*);
void InsertNode(int, int);
void Insert_end(int);

struct ListNode* sum_head;

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    //struct ListNode *temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    //struct ListNode *sum = (struct ListNode*)malloc(sizeof(struct ListNode));
    sum_head = NULL;
    struct ListNode *head = NULL;
    struct ListNode *current;
    int valuel1=0;
    int valuel2=0;
    int carry = 0;
    int value;

    while(l1!=NULL || l2!=NULL || carry!=0)
    {
        if (l1!=NULL)
        {
            valuel1 = l1->val;
            l1 = l1->next;
        }
        else
        {
            valuel1 = 0;
        }

        if (l2!=NULL)
        {
            valuel2 = l2->val;
            l2 = l2->next;
        }
        else
        {
            valuel2=0;
        }

        value = valuel2 + valuel1 + carry;
        carry=0;
        
        //int value = sum->val;
        if (value >=10)
        {
            carry = (value)/10;
            value = (value)%10;
        }

        Insert_end(value);
        
    }
    return sum_head;
}

void Insert_end(int x)
{
    struct ListNode* current = sum_head;
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val = x;

    if (current==NULL)
    {
        sum_head = temp;
        temp->next=NULL;
        return;
    }

    while (current->next!=NULL)
    {
        current = current->next;
    }
    current->next = temp;
    temp->next = NULL;
}

struct ListNode* headl1;
struct ListNode* headl2;

int main()
{
    headl1 = NULL;
    headl2 = NULL;
    int l1_size, l2_size;
    int value_node;

    printf("Enter length of linked list 1: ");
    scanf("%d" ,&l1_size);
    struct ListNode* l1 = (struct Node*)malloc(l1_size*(sizeof(struct ListNode)));

    printf("Enter length of linked list 2: ");
    scanf("%d" ,&l2_size);
    struct ListNode* l2 = (struct Node*)malloc(l1_size*(sizeof(struct ListNode)));

    printf("Enter %d elements of linked list 1: \n" ,l1_size);
    for (int i=0 ; i<l1_size ; i++)
    {
        scanf("%d" ,&value_node);
        InsertNode(value_node, 1);
    }

    printf("Enter %d elements of linked list 2: \n" ,l2_size);
    for (int i=0 ; i<l2_size ; i++)
    {
        scanf("%d" ,&value_node);
        InsertNode(value_node, 2);
    }

    printf("Linked List 1: ");
    Print(headl1);

    printf("Linked List 2: ");
    Print(headl2);

    struct ListNode* result = addTwoNumbers(headl1, headl2);
    //passing head of both linked list

    printf("Result: ");
    Print(sum_head);

    return 0;
}

void InsertNode(int value, int head)
{
    struct ListNode* currentnode;
    struct ListNode* tempnode = (struct ListNode*)malloc(sizeof(struct ListNode));
    tempnode->val = value;
    if (head==1)
    {
        currentnode = headl1;
        
        if (headl1==NULL)
        {
            headl1 = tempnode;
            tempnode->next=NULL;
            return;
        }
    }

    else
    {
        currentnode = headl2;
        
        if (headl2==NULL)
        {
            headl2 = tempnode;
            tempnode->next=NULL;
            return;
        }
    }

    while (currentnode->next!=NULL)
    {
        currentnode = currentnode->next;
    }
    currentnode->next = tempnode;
    tempnode->next = NULL;
}

void Print(struct ListNode* head)
{
    struct ListNode* current = head;
    while(current!=NULL)
    {
        printf("%d " ,current->val);
        current = current->next;
    }
    printf("\n");
}