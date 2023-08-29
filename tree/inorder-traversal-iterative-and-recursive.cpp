
//    void inortr(TreeNode* root,vector<int>&res){
//         //base case
//         if(root==NULL){
//             return;
//         }

//         //LNR
//         inortr(root->left,res);
//         res.push_back(root->val);
//         inortr(root->right,res);

//    }
//     vector<int> inorderTraversal(TreeNode* root) {

//      vector<int> res;
       
//         inortr(root,res);
//         return res;

        
//     }




//           iterative

    // vector<int> inorderTraversal(TreeNode* root) {
    //    vector<int>ans;
    //     if(!root)return ans;
    //      stack<TreeNode*>st;
    //      TreeNode* temp=root;
    //      while(!st.empty() or temp){
    //          while(temp){
    //              st.push(temp);
    //              temp=temp->left;
    //          }
    //          temp=st.top();
    //          ans.push_back(st.top()->val);
    //          st.pop();
    //          temp=temp->right;
    //      }
    //     return ans;
    // }

    

    vector<int> inorderTraversal(TreeNode* root) {
       vector < int > inOrder;
            stack < TreeNode * > s;
            while (true) {
                if (root != NULL) {
                s.push(root);
                root = root -> left;
                } else {
                if (s.empty()) break;
                root = s.top();
                inOrder.push_back(root -> val);
                s.pop();
                root = root -> right;
                }
            }
            return inOrder;
                }
};
