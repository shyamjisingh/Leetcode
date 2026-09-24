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
  int calh(TreeNode* root,vector<int>&rh,vector<int>&lh){
     if(!root){
        return 0;

     }
     if(!root->left && !root->right){
        return 1;
     }
      int l=calh(root->left,lh,rh);
      int  r=calh(root->right,lh,rh);
         lh.push_back(l); 
         rh.push_back(r); 
         return 1+max(l,r); 
         
           }
    bool isBalanced(TreeNode* root) {
         vector<int>rh;
       vector<int>lh;
       calh(root,rh,lh);

       for(int i=0;i<lh.size();i++){
            if(abs(lh[i]-rh[i])>1){
                return 0;
            }
        }


        return 1;
    }
};