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
    private:
     TreeNode* f(TreeNode *root){
         if(root == nullptr){
             return nullptr;
         }
         if(root->left != nullptr){
             f(root->left);
         }
         if(root->right != nullptr){
             f(root->right);
         }
         if(root->left == nullptr && root->right == nullptr){
             return root;
         }
         if(root->left == nullptr){
             root->left = root->right;
             root->right = nullptr;
         }
         else if(root->right == nullptr){
             root->right = root->left;
             root->left = nullptr;
         }
         else {
            TreeNode* temp = root->left;
            root->left = root->right;
            root->right = temp;
         }

         return root;
     }

public:
    TreeNode* invertTree(TreeNode* root) {
        return f(root);
    }
};
