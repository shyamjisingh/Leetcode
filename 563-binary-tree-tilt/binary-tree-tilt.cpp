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
         int  find(TreeNode* root,int &ans){
            if(root==nullptr)
        return 0;
   int lef= find(root->left,ans);
    int rei= find(root->right,ans);
           ans+=abs(lef-rei);
           return root->val+lef+rei;
                
         }      

   
    int findTilt(TreeNode* root) {
         
        int ans=0;
         find(root,ans);
        return ans;

         
    }
};