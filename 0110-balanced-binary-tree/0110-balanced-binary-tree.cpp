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
    
    int height(TreeNode* root){
        
        if(root==NULL){
            return 0;
        }
        
        int lefttree = height(root->left);
        int righttree= height(root->right);
        
        int ans = max(lefttree,righttree)+1;
        
        return ans;
        
        
    }
    bool isBalanced(TreeNode* root) {
        
        if(root==NULL){
            return true;
        }
        
        int leftheight = height(root->left);
        int rightheight = height(root->right);
        int diff = abs(leftheight - rightheight);
        
        bool ans1 = (diff<=1);
        
        bool lefttree = isBalanced(root->left);
        bool righttree = isBalanced(root->right);
        
        if(lefttree&&righttree&&ans1){
            
            return true;
        }
        
        else{
            
            return false;
        }
        
    }
};