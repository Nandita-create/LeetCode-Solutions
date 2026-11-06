//Same Tree
#include <iostream>
#include <vector>
#include <string>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        vector<string> arr_p;
        InOrder(p, arr_p, "Root");

        vector<string> arr_q;
        InOrder(q, arr_q, "Root");

        if (arr_p==arr_q)
        return true;

        return false;
    }

    void InOrder(TreeNode* root, vector<string>& arr, string position)
    {
        if (root==NULL)
        {
            arr.push_back(position + ":NULL");
            return;
        }

        InOrder(root->left, arr, "L");
        arr.push_back(position + ":" + to_string(root->val));
        InOrder(root->right, arr, "R");
    }
};