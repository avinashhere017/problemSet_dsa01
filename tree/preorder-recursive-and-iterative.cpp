// void preorder(TreeNode* root, vector<int> &res){
    //     //base case 
    //     if(root==NULL){
    //         return;
    //     }
    //     //NLR
    //     res.push_back(root->val);
    //     preorder(root->left,res);
    //     preorder(root->right,res);
    // }
    // vector<int> preorderTraversal(TreeNode* root) {
    //     vector<int> res;

    //     preorder(root,res);
    //     return res;
    // }

           


    vector<int> preorderTraversal(TreeNode* root) {
         vector<int> v;
         if(root==NULL)return v;
    stack<TreeNode *> st;
    st.push(root);
    while(!st.empty()){
        TreeNode * temp = st.top();
        v.push_back(temp->val);
        st.pop();
         
        if(temp->right){
            st.push(temp->right);
        }
        if(temp->left){
            st.push(temp->left);
        }
       
    }
    return v;

    }
