/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */day3 problem 
class Solution {
public:
    bool solve(TreeNode* root, long long minVal , long long maxVal) {

        TreeNode* curr=root;

        if(curr==nullptr)
          return true;

       if(curr->val <=minVal  || curr->val >=maxVal)
         return false;   
        
    
      return solve(curr->left , minVal , curr->val) &&
             solve(curr->right , curr->val , maxVal);
    }

    bool isValidBST(TreeNode* root)
      {
        return solve(root , LLONG_MIN , LLONG_MAX);
      }
};