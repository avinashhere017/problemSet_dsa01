// int maxDepth(TreeNode* root) {
    //     if(root==NULL){return 0;}

    //     int lh = maxDepth(root->left);
    //     int rh = maxDepth(root->right);

    //     int ans = max(lh,rh)+1;
    //     return ans;
        
    // }


     int maxDepth(TreeNode* root) {
         queue<TreeNode*> q;
         if(root==NULL)return 0;
         q.push(root);
         int level =0;

         while(!q.empty()){
             int n =q.size();
             for(int i =0;i<n;i++){
                 TreeNode* temp = q.front();
                 q.pop();

                 if(temp->left){q.push(temp->left);}
                 if(temp->right){q.push(temp->right);}
             }
             level++;
         }
         return level;
     }
