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
