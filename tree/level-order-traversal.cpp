vector<int> levelOrder(Node* node)
    {
      //Your code here
      
      vector<int> ans;
      queue<Node*> q;
      
      if(node==NULL)return ans;
      
      q.push(node);
      while(!q.empty()){
          Node* temp = q.front();
          q.pop();
          
          
          if(temp->left!=NULL){
              q.push(temp->left);
          }
          if(temp->right!=NULL){
              q.push(temp->right);
          }
          ans.push_back(temp->data);
          
      }
      return ans;
      
    }




// leetcode answer

vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root == NULL) return ans;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> level;
            for(int i = 0;i<n;i++){
                TreeNode* temp = q.front();
                q.pop();
                 level.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
               
            }
            ans.push_back(level);

        }
        return ans;
