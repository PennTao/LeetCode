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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> result;
        postTrav(root, result);
        return result;
    }
    void postTrav(TreeNode *root, vector<int> &res)
    {
        if(root == NULL)
            return;
        postTrav(root->left, res);
        postTrav(root->right,res);
        res.push_back(root->val);
        return;
    }
};