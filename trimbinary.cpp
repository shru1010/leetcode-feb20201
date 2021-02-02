class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
     TreeNode* helper = new TreeNode(0);
        helper->left = dfs(root, low, high);
        return helper->left;   
    }
    TreeNode* dfs(TreeNode* root, int low, int high){
        if(!root) return nullptr;
        if(root->val >= low && root->val <= high){   //root->val is qualified
            TreeNode* tmp = new TreeNode(root->val);
            tmp->left = dfs(root->left, low, high);
            tmp->right = dfs(root->right, low, high);
            return tmp;
        }
        if(root->val < low)  //cut out the left subtree
            return dfs(root->right, low, high);
        else                 //cut out the right subtree
            return dfs(root->left, low, high);
    }
};
