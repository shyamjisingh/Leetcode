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
         pair<int,int> dfs(TreeNode*&node , int &resultCount){
            
             if (!node) {
            return {0, 0};
        }
        
        pair<int, int> left = dfs(node->left, resultCount);
        pair<int, int> right = dfs(node->right, resultCount);
        
        int currentSum = left.first + right.first + node->val;
        int currentCount = left.second + right.second + 1;
        
        if (currentSum / currentCount == node->val) {
            resultCount++;
        }
        
        return {currentSum, currentCount};
             
         }
            
 
    int averageOfSubtree(TreeNode* root) {
          int resultCount=0;
          dfs(root , resultCount);
          return resultCount;
    }
};