/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> res;
        stack<TreeNode*> st;
        if(root == NULL)
            return res;
        TreeNode* curNode;
        
        curNode = root;
        st.push(root);
        while(st.size()>0)
        {
            curNode = st.top();
            
            res.push_back(curNode->val);
            st.pop();
              if(curNode->right != NULL)  st.push(curNode->right);
            if(curNode->left != NULL)   st.push(curNode->left);
            
        }
        return res;
    }
};