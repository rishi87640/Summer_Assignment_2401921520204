Problems
Contest
Discuss
More


0
0Streaks
Ready to Practice?
DCC Badge

avatar
Avatar
rishipatidar12
Access all features with our Premium subscription!
myLists
My Lists
notebook
Notebook
progress
Progress
points
Points
Try New Features
Orders
My Playgrounds
Settings
Appearance
Sign Out
Submissions Detail -
Path Sum
Accepted
118 / 118 testcases passed
rishipatidar12
rishipatidar12
submitted at Jul 04, 2026 17:48

Solution
Runtime
3
ms
Beats
3.22%
Memory
21.45
MB
Beats
66.52%
Code
C++
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
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        

        if(root==NULL)
         return  false;

         targetSum-=root->val;

         if(root->left==NULL && root->right==NULL)
          return targetSum==0;

         return hasPathSum(root->left,targetSum)
             || hasPathSum(root->right,targetSum); 
    }
};
View less
 
Write your notes here
Select related tags
0/5
Back to Problem
Copyright © 2026 LeetCode
Download App
Help Center
Bug Bounty
Assessment
Terms
Privacy Policy

India
