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
    
    void findpath(TreeNode* root, int sum,vector<vector<int>>&ans, vector<int>path, int targetSum){
        
        if(root == NULL){
            
            return;
        }
        
        //Include leaf Node
        
        if(root->left == NULL && root->right== NULL){
            
            path.push_back(root->val);
            
            sum+=root->val;
            
            if(sum==targetSum){
                
                ans.push_back(path);
            }
            
            return  ;
        }
        
        //Include rest nodes
        
         path.push_back(root->val);
            
         sum+=root->val;
        
        findpath(root->left, sum, ans, path, targetSum);
        findpath(root->right, sum, ans, path, targetSum);
            
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>>ans;
        int sum =0;
        vector<int>temp;
        
        findpath(root,sum, ans, temp, targetSum);
        return ans;
        
    }
};