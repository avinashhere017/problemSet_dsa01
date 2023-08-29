

    //  void postorder(TreeNode* root, vector<int> &res){
    //     //base case 
    //     if(root==NULL){
    //         return;
    //     }
    //     //LRN
       
    //     postorder(root->left,res);
    //     postorder(root->right,res);
    //      res.push_back(root->val);


    // }
    // vector<int> postorderTraversal(TreeNode* root) {
    //      vector<int> res;

    //     postorder(root,res);
    //     return res;
        


        vector<int> postorderTraversal(TreeNode* cur) {
            vector < int > postOrder;
  if (cur == NULL) return postOrder;

  stack < TreeNode * > st;
  while (cur != NULL || !st.empty()) {

    if (cur != NULL) {
      st.push(cur);
      cur = cur -> left;
    } else {
      TreeNode * temp = st.top() -> right;
      if (temp == NULL) {
        temp = st.top();
        st.pop();
        postOrder.push_back(temp -> val);
        while (!st.empty() && temp == st.top() -> right) {
          temp = st.top();
          st.pop();
          postOrder.push_back(temp -> val);
        }
      } else cur = temp;
    }
  }
  return postOrder;

        }
};
