/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    void dfs(TreeNode * root, vector<string>&s, string str){
        
        if(root->left==NULL && root->right==NULL){
            s.push_back(str);
        }
        if(root->left){
            dfs(root->left, s, str+"->"+to_string(root->left->val));
        }
        if(root->right){
            dfs(root->right, s, str+"->"+to_string(root->right->val));
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> s;
        if(!root) return s;
        string str = "" + to_string(root->val);
        dfs(root,s,str);
        return s;
    }
};
