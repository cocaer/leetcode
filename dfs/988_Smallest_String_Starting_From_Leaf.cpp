class Solution {
public:

    
    void dfs(TreeNode * root, vector<string> &s, string path){
        
        if(root->right==NULL&&root->left==NULL){
            s.push_back(path);
            return;
        }
        
        if(root->left){
            char c = root->left->val+'a';
            dfs(root->left,s,c+path);
        }
        if(root->right){
            char c= root->right->val+'a';
            dfs(root->right,s,c+ path);
        }
    }
    
    string smallestFromLeaf(TreeNode* root) {
        vector<string> s;
        char c = root->val+'a';
        string path = "";
        dfs(root, s, c+path );
        sort(s.begin(),s.end());
        return s[0];
    }
};
