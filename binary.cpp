class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(!root)return ans; //We return if the tree is empty.
        
        queue<TreeNode*> q; 
        q.push(root); 
        
  
    while (!q.empty()) 
    {     
        // number of nodes at current level 
        int n = q.size(); 
          
        // Traverse all nodes of current level  
        for(int i = 1; i <= n; i++) 
        { 
            TreeNode* temp = q.front(); 
            q.pop(); 
                  
            // Print the right most element  
            // at the level 
            if (i == n) 
                ans.push_back(temp->val);
              
            // Add left node to queue 
            if (temp->left != NULL) 
                q.push(temp->left); 
  
            // Add right node to queue 
            if (temp->right != NULL) 
                q.push(temp->right); 
        } 
    } 
        return ans;

        
    }
};
