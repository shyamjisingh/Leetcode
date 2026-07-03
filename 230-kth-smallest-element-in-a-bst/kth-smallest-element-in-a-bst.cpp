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
        int ans=0;
        int count;
       void fun(TreeNode* root, int k){
            if(!root){
                
                return;
            }
          
        fun(root->left,k);
        count++;
           if(k==count){
            ans =root->val;
            
           }
        fun(root->right,k);
       
       }
    int kthSmallest(TreeNode* root, int k) {
        //count =0;
         fun(root,k);
         return ans;
    }
};