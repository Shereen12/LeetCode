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
    int ans = 0;

    int longestPath(TreeNode* root){
        if(root->left == nullptr && root->right == nullptr){
            return 0;
        }
        int left = 0, right = 0;
        if(root->left){
            left = longestPath(root->left) + 1;
        }

        if(root->right){
            right = longestPath(root->right) + 1;
        }

        ans = max(ans, left + right);
        int r = max(left, right);
        return r;
    }
public:

    int diameterOfBinaryTree(TreeNode* root) {
        int x = longestPath(root);
        return ans;
    }
    
};
